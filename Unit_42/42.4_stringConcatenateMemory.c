#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char s1[10] = "world";
    char *s2 = malloc(sizeof(char) * 20);

    strcpy(s2, "Hello");

    strcat(s2, s1);        // s2 뒤에 s1을 붙임

    printf("%s\n", s2);    // Helloworld

    free(s2);

    return 0;
}
