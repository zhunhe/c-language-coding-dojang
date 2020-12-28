#include <stdio.h>

int main()
{
    // 시스템에 따라 포인터의 크기가 달라짐
    // 32비트: 4바이트, 64비트: 8바이트
    int *numPtr;
    int num1 = 10;

    numPtr = &num1;   // numPtr은 num1의 주소를 가리킨다

    printf("%p\n", numPtr);    // numPtr의 값: num1의 메모리 주소
    printf("%p\n", &num1);     // &num1: num1의 메모리 주소

    return 0;
}
