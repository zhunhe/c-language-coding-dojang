#include <stdio.h>
#include <stdlib.h>    // malloc, free 함수가 선언된 헤더 파일

int main()
{
    int num1 = 20;
    int *numPtr1;

    numPtr1 = &num1;

    int *numPtr2;

    // 동적 메모리 할당
    numPtr2 = malloc(sizeof(int));

    printf("%p\n", numPtr1);
    printf("%p\n", numPtr2);

    // 할당된 메모리 해제
    free(numPtr2);

    return 0;
}
