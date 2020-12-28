#include <stdio.h>
#include <stddef.h>   // offsetof 매크로가 정의된 헤더 파일

struct PacketHeader {
    char flags;    // 1바이트
    int seq;       // 4바이트
};

int main()
{
    // offsetof(): 구조체에서 변수의 위치를 구하는 함수
    // offsetof(struct 구조체, 변수)
    // offsetof(구조체별칭, 변수)
    printf("%d\n", offsetof(struct PacketHeader, flags));    // 0
    printf("%d\n", offsetof(struct PacketHeader, seq));      // 4

    return 0;
}
