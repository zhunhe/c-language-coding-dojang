#include<stdio.h>
#include<limits.h>

void min(void)
{
    char num1 = CHAR_MIN;
    short num2 = SHRT_MIN;
    int num3 = INT_MIN;
    long num4 = LONG_MIN;
    long long num5 = LLONG_MIN;

    printf("%d %d %d %ld %lld\n", num1, num2, num3, num4, num5);
}

void max(void)
{
    char num1 = CHAR_MAX;
    short num2 = SHRT_MAX;
    int num3 = INT_MAX;
    long long num4 = LLONG_MAX;

    printf("%d %d %d %lld\n", num1, num2, num3, num4);

    unsigned char num5 = UCHAR_MAX;
    unsigned short num6 = USHRT_MAX;
    unsigned int num7 = UINT_MAX;
    unsigned long long num8 = ULLONG_MAX;

    printf("%u %u %u %llu\n", num5, num6, num7, num8);
}

int main(void)
{
    min();
    max();

    return 0;
}
