#include <stdio.h>     // 파일 처리 함수가 선언된 헤더 파일
#include <stdint.h>    // 크기별로 정수 자료형이 정의된 헤더 파일
#include <stdlib.h>    // malloc, free 함수가 선언된 헤더 파일
#include <string.h>    // strcpy, memset 함수가 선언된 헤더 파일

#pragma pack(push, 1)    // 구조체를 1바이트 크기로 정렬
typedef struct _ARCHIVE_HEADER {    // 아카이브 헤더 구조체 정의
    uint16_t magic;                     // 아카이브 파일 매직 넘버
    uint16_t version;                   // 아카이브 파일 버전
} ARCHIVE_HEADER, *PARCHIVE_HEADER;

typedef struct _FILE_DESC {         // 파일 정보 구조체 정의
    char     name[256];                 // 파일 이름
    uint32_t size;                      // 파일 크기
    uint32_t dataOffset;                // 파일 데이터의 위치
} FILE_DESC, *PFILE_DESC;
#pragma pack(pop)

typedef struct _FILE_NODE {         // 파일 목록 연결 리스트 구조체 정의
    struct _FILE_NODE *next;            // 다음 노드의 주소를 저장할 포인터
    FILE_DESC desc;                     // 파일 정보
} FILE_NODE, *PFILE_NODE;

typedef struct _ARCHIVE {           // 아카이브 메인 구조체
    ARCHIVE_HEADER header;              // 아카이브 헤더
    FILE *fp;                           // 아카이브 파일 포인터
    FILE_NODE fileList;                 // 파일 목록 연결 리스트의 머리 노드
} ARCHIVE, *PARCHIVE;

#define ARCHIVE_NAME "archive.bin"   // 아카이브 파일 이름

uint32_t getFileSize(FILE *fp)    // 파일의 크기를 구하는 함수 정의
{
    uint32_t size;
    uint32_t currPos = ftell(fp);    // 현재 파일 포인터의 위치 저장

    // 파일의 끝으로 이동하여 파일 크기를 구함
    fseek(fp, 0, SEEK_END);
    size = ftell(fp);

    fseek(fp, currPos, SEEK_SET);    // 파일 포인터의 이전 위치로 되돌림

    return size;
}

void list(PARCHIVE archive)    // 파일 목록 출력 함수 정의
{
    // 파일 목록 연결 리스트를 순회하면서 파일 이름 출력
    PFILE_NODE curr = archive->fileList.next;    // 첫 번째 노드
    while (curr != NULL)
    {
        printf("%s\n", curr->desc.name);

        curr = curr->next;
    }
}

int main()
{
    PARCHIVE archive = malloc(sizeof(ARCHIVE));
    memset(archive, 0, sizeof(ARCHIVE));

    PFILE_NODE curr;

    FILE *fp = fopen(ARCHIVE_NAME, "rb");    // 아카이브 파일을 읽기/쓰기 모드로 열기
    if (fp != NULL)                           // 아카이브 파일이 없으면
    {
        // 아카이브 파일에서 아카이브 헤더 읽기
        if (fread(&archive->header, sizeof(ARCHIVE_HEADER), 1, fp) < 1)
        {
            printf("아카이브 헤더 읽기 실패\n");
            fclose(fp);
            return -1;
        }
	}
        // 아카이브 파일 매직 넘버 검사
    if (archive->header.magic != 'XR')
    {
        printf("아카이브 파일이 아닙니다.\n");
        fclose(fp);
        return -1;
    }

    // 아카이브 파일 버전 검사
    if (archive->header.version != 2)
    {
        printf("버전이 맞지 않습니다.\n");
        fclose(fp);
        return -1;
    }

    archive->fp = fp;    // 아카이브 파일 포인터 저장

    int ret = 0;
    uint32_t size = getFileSize(fp);    // 아카이브 파일의 크기를 구함
    uint32_t currPos = ftell(fp);       // 현재 파일 포인터의 위치를 구함

    while (size > currPos)         // 파일 포인터의 위치가 파일 크기보다 작을 때 반복
    {
        PFILE_NODE node = malloc(sizeof(FILE_NODE));
        memset(node, 0, sizeof(FILE_NODE));

        // 파일 정보 읽기
        if (fread(&node->desc, sizeof(FILE_DESC), 1, fp) < 1)
        {
            printf("아카이브 파일 읽기 실패\n");
            free(node);       // 동적 메모리 해제
            ret = -1;         // -1은 실패
            goto FINALIZE;    // 모든 동적 메모리 해제 코드로 이동
        }

        // 연결 리스트에 파일 정보 노드(FILE_NODE) 추가
        node->next = archive->fileList.next;
        archive->fileList.next = node;

        // 현재 파일 포인터의 위치에 파일 크기를 더하여 다음 파일 정보 위치로 이동
        currPos = ftell(fp) + node->desc.size;
        fseek(fp, currPos, SEEK_SET);
    }

    list(archive);    // 파일 목록 출력

FINALIZE:
    // 파일 목록 연결 리스트를 순회하면서 메모리 해제
    curr = archive->fileList.next;    // 첫 번째 노드
    while (curr != NULL)
    {
        PFILE_NODE next = curr->next;
        free(curr);

        curr = next;
    }

    fclose(archive->fp);    // 아카이브 파일 포인터 닫기

    free(archive);    // 아카이브 메인 구조체 해제

    return ret;       // 성공이냐 실패냐에 따라 0 또는 -1을 반환
}
