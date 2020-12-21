#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int num1;
    int num2;
    int num3;

    printf("Input three integer: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    printf("%d\n", num1);
    printf("%d\n", num2);
    printf("%d\n", num3);

    return 0;
}
