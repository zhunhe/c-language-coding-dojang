#include<stdio.h>

int main(void)
{
    int height;
    scanf("%d", &height);
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < height; j++)
        {
            if (i + j >= height - 1)
                printf("*");
            else
                printf(" ");
        }
        for (int j = 0; j < height-1; j++)
        {
            if (i > j)
                printf("*");
        }
        printf("\n");
    }
}
