#include<stdio.h>

int main(void)
{
    printf("%ld\n", -10L);
    printf("%lld\n", -1234567890123456789LL);

    printf("%u\n", 10U);
    printf("%lu\n", 1234567890UL);

    printf("%lu\n", 10UL);
    printf("%llu\n", 1234567890123456789ULL);

    printf("0%lo\n", 017L);
    printf("0%lo\n", 017UL);
    printf("0x%lX\n", 0x7FFFFFL);
    printf("0x%lX\n", 0xFFFFFFFFUL);

    return 0;
}
