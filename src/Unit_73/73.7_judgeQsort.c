#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void *s1, const void *s2)
{
    return strcmp((char *)s2, (char *)s1);
}

int main()
{
    char s1[10][20];

    scanf("%s %s %s %s %s %s %s %s %s %s", 
        s1[0], s1[1], s1[2], s1[3], s1[4], s1[5], s1[6], s1[7], s1[8], s1[9]
    );

    qsort(s1, sizeof(s1) / sizeof(s1[0]), sizeof(s1[0]), compare);

    for (int i = 0; i < 10; i++)
    {
        printf("%s ", s1[i]);
    }

    printf("\n");

    return 0;
}
