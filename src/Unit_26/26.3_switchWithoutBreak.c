#include <stdio.h>

int main()
{
    int num1;

    scanf("%d", &num1);

    switch (num1)
    {
    case 1:
    case 2:
        printf("1<=num1<=2\n");
        break;
    case 3:
    case 4:
        printf("3<=num1<=4\n");
        break;
    default:
        printf("default\n");
    }

    return 0;
}
