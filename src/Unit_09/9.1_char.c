#include<stdio.h>

int main(void)
{
    char c1 = 'a';
    char c2 = 'b';

    printf("%c, %d\n", c1, c1);
    printf("%c, %d\n", c2, c2);

    char c3 = 97;
    char c4 = 98;

    printf("%c, %d\n", c3, c3);
    printf("%c, %d\n", c4, c4);

    char c5 = 0x61;
    char c6 = 0x62;

    printf("%c, %d\n", c5, c5);
    printf("%c, %d\n", c6, c6);

    return 0;
}
