#include<stdio.h>

int main(void)
{
    unsigned char num1 = 162;    // 1010 0010
    unsigned char num2;

    // 비트연산자 ~
    // 0은 1로 1은 0으로 비트를 뒤집는다
    num2 = ~num1;

    printf("%u\n", num2);    // 0101 1101 -> 93

    return 0;
}
