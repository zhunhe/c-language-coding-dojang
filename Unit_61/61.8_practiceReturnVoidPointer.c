#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *allocMemory()
{
    void *ptr = malloc(100);

    return ptr;
}

int main()
{
    char *s1;

    s1 = allocMemory();
    strcpy(s1, "Uranus");
    printf("%s\n", s1);
    free(s1);

    return 0;
}

