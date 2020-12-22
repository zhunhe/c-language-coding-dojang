#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int size;
    scanf("%d", &size);
    
    int **m = malloc(sizeof(int *) * size);
    for (int i = 0; i < size; i++)
    {
        m[i] = malloc(sizeof(int) * size);
    }
    
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i == j)
                printf("1 ");
            else
                printf("0 ");
        }
        printf("\n");
    }
    for (int i = 0; i < size; i++)
    {
        free(m[i]);
    }
    free(m);
    
    return 0;
}
