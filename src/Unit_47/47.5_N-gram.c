#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char s1[11];
    int n;

    scanf("%d %s", &n, s1);

    if (strlen(s1) < n)
    {
        printf("wrong\n");
    }
    else
    {
        for (int i = 0; i < strlen(s1)-n+1; i++)
        {
            for (int j = i; j < i+n; j++)
            {
                printf("%c", s1[j]);
            }
            printf("\n");
        }
    }
    return 0;
}
