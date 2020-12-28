#include<stdio.h> 

int main(void)
{
    unsigned char num1 = 4;    // 0000 0100
    unsigned char num2 = 4;
    unsigned char num3 = 4;
    unsigned char num4 = 4;
    unsigned char num5 = 4;
 
    num1 &= 5;     // 0000 0101와 AND 연산 후 저장
    num2 |= 2;     // 0000 0010와 OR 연산 후 저장
    num3 ^= 3;     // 0000 0011와 XOR 연산 후 저장
    num4 <<= 2;    // 비트를 왼쪽으로 2번 이동한 후 저장
    num5 >>= 2;    // 비트를 오른쪽으로 2번 이동한 후 저장
 
    printf("%u\n", num1);    // 0000 0100 -> 4
    printf("%u\n", num2);    // 0000 0110 -> 6
    printf("%u\n", num3);    // 0000 0111 -> 7
    printf("%u\n", num4);    // 0001 0000 -> 16
    printf("%u\n", num5);    // 0000 0001 -> 1
 
    return 0;
}
