#include<stdio.h>

int main(void)
{
    printf("%ld\n", -10L);
    printf("%lld\n", -1234567890123456789LL);

    printf("%u\n", 10U);
    printf("%lu\n", 1234567890UL);

    printf("%lu\n", 10UL);
    printf("%llu\n", 1234567890123456789ULL);

    return 0;
}
