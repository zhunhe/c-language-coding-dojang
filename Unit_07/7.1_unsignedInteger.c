#include<stdio.h>

int main(void)
{
    unsigned char num1 = 200U;

    unsigned short num2 = 60000U;

    unsigned int num3 = 4123456789U;

    unsigned long num4 = 4123456789UL;

    unsigned long long num5 = 12345678901234567890ULL;

    printf("%u %u %u %lu %llu\n", num1, num2, num3, num4, num5);

    return 0;
}
