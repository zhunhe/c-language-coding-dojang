#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char *s1 = malloc(sizeof(char) * 30);

    strcpy(s1, "The Little Prince");

    char *ptr = strtok(s1, " ");    // 동적 메모리에 들어있는 문자열은 자를 수 있음

    while (ptr != NULL)
    {
        printf("%s\n", ptr);
        ptr = strtok(NULL, " ");
    }

    free(s1);
}
