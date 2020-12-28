#include <stdio.h>

int main()
{
    char s1[20];

    sprintf(s1, "Hello, %s", "world!");    // "Hello, world!"

    printf("%s\n", s1);

    return 0;
}
