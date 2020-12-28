#include <stdio.h>
#include <stdlib.h>    // malloc, free 함수가 선언된 헤더 파일

int main()
{
    // 이중포인터 2차원배열처럼 사용하기
    // m[3][4]
    int **m = malloc(sizeof(int *) * 3);   // (int 포인터크기 * 세로크기)
    for (int i = 0; i < 3; i++)
    {
        m[i] = malloc(sizeof(int) * 4);    // (int 크기 * 가로크기)
    }

    m[0][0] = 1;
    m[2][0] = 5;
    m[2][3] = 2;

    printf("%d\n", m[0][0]);    // 1
    printf("%d\n", m[2][0]);    // 5
    printf("%d\n", m[2][3]);    // 2

    // 할당의 역순으로 메모리 해제
    for (int i = 0; i < 3; i++)
    {
        free(m[i]);
    }
    free(m);

    return 0;
}
