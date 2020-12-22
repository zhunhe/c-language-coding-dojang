#include <stdio.h>

int main()
{
    int *numPtr;
    int num1 = 10;

    numPtr = &num1;

    *numPtr = 20;     // 역참조 연산자로 num1에 저장된 값 변경

    printf("%d\n", *numPtr);
    printf("%d\n", num1);

    return 0;
}
