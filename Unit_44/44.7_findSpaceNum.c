#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int count = 0;
    char *s1 = malloc(sizeof(char) * 1000);
    scanf("%[^\n]s", s1);
    
    char *ptr = strchr(s1, ' ');
    while (ptr != NULL)
    {
        ptr = strchr(ptr + 1, ' ');
        count++;
    }
}
