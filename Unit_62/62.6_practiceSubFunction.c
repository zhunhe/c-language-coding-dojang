#include <stdio.h>

float sub(float num1, float num2)
{
    return num1 - num2;
}

int main()
{
    float num1;

    num1 = sub(1.0f, 0.1f);

    printf("%f\n", num1);

    return 0;
}
