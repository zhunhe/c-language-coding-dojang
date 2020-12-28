#include<stdio.h>
 
int main(void)
{
    unsigned char num1 = 3;     // 0000 0011
    unsigned char num2 = 24;    // 0001 1000
 
    printf("%u\n", num1 << 3);  // 0001 1000 < 3번 이동
    printf("%u\n", num2 >> 2);  // 0000 0110 > 2번 이동
 
    return 0;
}
