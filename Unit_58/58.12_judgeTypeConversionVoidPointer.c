#include <stdio.h>
#include <stdlib.h>

int main()
{
    long double *numPtr1 = malloc(sizeof(long double));
    void *ptr;

    scanf("%Lf", numPtr1);

    ptr = numPtr1;

    printf("%Lf\n", *(long double *)ptr);

    free(numPtr1);

    return 0;
}
