#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void compareString(char *s1, char *s2)
{
    printf("%s\n", strcmp(s1, s2)==0 ? "같음" : "다름");
}

int main()
{
    char *s1 = malloc(sizeof(char) * 10);

    strcpy(s1, "Venus");

    compareString(s1, "Venus");

    free(s1);

    return 0;
}
