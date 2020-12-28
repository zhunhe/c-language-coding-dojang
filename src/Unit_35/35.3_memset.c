#include <stdio.h>
#include <stdlib.h>    // malloc, free 함수가 선언된 헤더 파일
#include <string.h>    // memset 함수가 선언된 헤더 파일

int main()
{
    long long *numPtr = malloc(sizeof(long long));

    memset(numPtr, 0x27, 8);

    printf("0x%llx\n", *numPtr);    // 0x2727272727272727: 27이 8개

    free(numPtr);

    return 0;
}
