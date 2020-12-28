#include <stdio.h>

int main()
{
    int num1;

    scanf("%d", &num1);

    switch (num1)
    {
        case 1:
            printf("num1 is 1\n");
            break;
        case 2:
            printf("num1 is 2\n");
            break;
        default:    // if-else의 else 같은 역할
            printf("default\n");
            break;
    }

    return 0;
}
