#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int m, n;
    int mineNum = 0;

    scanf("%d %d", &m, &n);

    // memory allocation
    char **matrix = malloc(sizeof(char *) * m);
    for (int i = 0; i < m; i++)
    {
        matrix[i] = malloc(sizeof(char) * n);
    }
    // set matrix
    for (int i = 0; i < m; i++)
    {
        scanf("%s", matrix[i]);
    }
    // print answer
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            mineNum = 0;
            if (matrix[i][j] == '*')
            {
                printf("*");
            }
            else
            {
                // upper
                if ((i>0) && (matrix[i-1][j] == '*')) mineNum++;
                // below
                if ((i<m-1) && (matrix[i+1][j] == '*')) mineNum++;
                // left
                if ((j>0) && (matrix[i][j-1] == '*')) mineNum++;
                // right
                if ((j<n-1) && (matrix[i][j+1] == '*')) mineNum++;
                // upper-left
                if ((i>0) && (j>0) && (matrix[i-1][j-1] == '*')) mineNum++;
                // upper-right
                if ((i>0) && (j<n-1) && (matrix[i-1][j+1] == '*')) mineNum++;
                // below-left
                if ((i<m-1) && (j>0) && (matrix[i+1][j-1] == '*')) mineNum++;
                // below-right
                if ((i<m-1) && (j<n-1) && (matrix[i+1][j+1] == '*')) mineNum++;
                printf("%d", mineNum);
            }
        }
        printf("\n");
    }
    // memory free
    for (int i = 0; i < m; i++)
    {
        free(matrix[i]);
    }
    free(matrix);
}
