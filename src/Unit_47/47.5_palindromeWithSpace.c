#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

int main()
{
    char s1[31];
    char s2[31];
    bool isPalindrome = true;

    scanf("%[^\n]s", s1);
    memset(s2, 0, sizeof(s2));

    char *ptr = strtok(s1, " ");
    while (ptr != NULL)
    {
        strcat(s2, ptr);
        ptr = strtok(NULL, " ");
    }
    for (int i = 0; i < strlen(s2)/2; i++)
    {
        if (s2[i] != s2[strlen(s2)-1-i])
            isPalindrome = false;
    }
    printf("%d\n", isPalindrome);

    return 0;
}
