#include <stdio.h>
#include <stdlib.h>    // malloc, free 함수가 선언된 헤더 파일

int main()
{
    int size;

    scanf("%d", &size);

    int *numPtr = malloc(sizeof(int) * size);    // (int크기 * input크기)만큼 동적 메모리 할당

    for (int i = 0; i < size; i++)
    {
        numPtr[i] = i;
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", numPtr[i]);
    }
    free(numPtr);

    return 0;
}
