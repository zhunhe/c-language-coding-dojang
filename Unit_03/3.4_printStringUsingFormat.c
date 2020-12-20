#include<stdio.h>

int main(void)
{
    printf("%s\n", "Hello world!");

    printf("%s %s\n", "Hello", "1234");
    printf("%s %s\n", "Hello,", "1234");
    printf("%s, %s\n", "Hello", "1234");
    printf("%s, %s\n", "Hello,", "1234");
    printf("%s%s\n", "Hello", "1234");
    printf("%s%s\n", "Hello ", "1234");
    printf("%s%s\n", "Hello", " 1234");

    return 0;
}
