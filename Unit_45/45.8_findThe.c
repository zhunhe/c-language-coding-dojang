#include<stdio.h>
#include<string.h>

#define WORD    "the"

int main()
{
    char s1[1001];
    int count=0;

    scanf("%[^\n]s", s1);

    char *ptr = strtok(s1, " .,");
    if (ptr != NULL && strcmp(ptr, WORD) == 0)
        count++;
    
    while (ptr != NULL)
    {
        ptr = strtok(NULL, " .,");
        if (ptr != NULL && strcmp(ptr, WORD) == 0)
            count++;
    }
    printf("%d\n", count);

    return 0;
}
