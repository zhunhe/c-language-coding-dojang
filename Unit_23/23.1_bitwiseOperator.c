#include<stdio.h>
 
int main(void)
{
    unsigned char num1 = 1;    // 0000 0001
    unsigned char num2 = 3;    // 0000 0011

    // num1 & num2
    // 같은 위치에 있는 bit가 둘다 1이면 1, 아니면 0
    // num1 0000 0001
    // num2 0000 0011
    // 결과 0000 0001
    printf("%d\n", num1 & num2);
    // num1 | num2
    // 같은 위치에 있는 bit가 하나만 1이면 1, 아니면 0
    // num1 0000 0001
    // num2 0000 0011
    // 결과 0000 0011
    printf("%d\n", num1 | num2);
    // num1 ^ num2
    // 같은 위치에 있는 bit가 다르면 1, 아니면 0
    // num1 0000 0001
    // num2 0000 0011
    // 결과 0000 0010
    printf("%d\n", num1 ^ num2);
 
    return 0;
}
