#include<stdio.h>

int main(void)
{
    printf("%d\n", 10);
    printf("%f\n", 0.1f);
    printf("%c\n", 'a');
    printf("%s\n", "Hello, world!");

    printf("%d\n", 19);
    printf("0%o\n", 017);
    printf("0x%X\n", 0x1F);

    printf("%f\n", 0.1f);
    printf("%f\n", 0.1F);
    printf("%f\n", 1.0e-5f);
    printf("%f\n", 1.0E-5F);

    return 0;
}
