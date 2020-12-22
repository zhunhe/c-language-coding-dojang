#include <stdio.h>
#include <stdlib.h>    // malloc, free 함수가 선언된 헤더 파일

int main()
{
    int *numPtr;

    numPtr = malloc(sizeof(int));

    *numPtr = 10;

    printf("%d\n", *numPtr);

    free(numPtr);

    return 0;
}
