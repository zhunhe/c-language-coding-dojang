#include <stdio.h>
#include <stdlib.h>    // malloc, free 함수가 선언된 헤더 파일

int main()
{
    // 메모리 동적 할당
    int *numPtr = malloc(sizeof(int) * 10);

    numPtr[0] = 10;
    numPtr[9] = 20;

    printf("%d\n", numPtr[0]);
    printf("%d\n", numPtr[9]);

    // 동적 할당 메모리 해제
    free(numPtr);

    return 0;
}
