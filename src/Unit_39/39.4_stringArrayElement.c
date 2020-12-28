#include <stdio.h>

int main()
{
    char s1[10] = "Hello";

    printf("%c\n", s1[1]);    // e
    printf("%c\n", s1[4]);    // o
    printf("%c\n", s1[5]);    // NULL

    return 0;
}
