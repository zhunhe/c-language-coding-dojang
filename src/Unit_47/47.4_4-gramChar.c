#include <stdio.h>
#include <string.h>
#define GRAM_NUMBER  4

int main()
{
    char text[300];
    int length;

    scanf("%[^\n]s", text);

    length = strlen(text);
    if (length < GRAM_NUMBER)
    {
        printf("wrong\n");
    }
    else
    {
        for (int i = 0; i < length - (GRAM_NUMBER-1); i++)
        {
            for (int j = 0; j < GRAM_NUMBER; j++)
                printf("%c", text[i + j]);

            printf("\n");
        }
    }

    return 0;
}
