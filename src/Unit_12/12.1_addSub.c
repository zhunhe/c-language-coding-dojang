#include <stdio.h>

int main(void)
{
    int num1;
    int num2;
    float num3;
    float num4;

    num1 = 1 + 2;
    num2 = 1 - 2;
    num3 = 1.0f + 0.456789f;
    num4 = 1.0f - 0.456789f;

    printf("%d\n", num1);
    printf("%d\n", num2);
    printf("%f\n", num3);
    printf("%f\n", num4);

    return 0;
}
