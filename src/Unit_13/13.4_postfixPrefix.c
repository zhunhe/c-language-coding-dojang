#include <stdio.h>

void postfix(void)
{
    int num1 = 2;
    int num2 = 2;
    int num3;
    int num4;

    num3 = num1++;    // num3 = 2 num1 = 3
    num4 = num2--;    // num4 = 2 num2 = 1

    printf("%d %d\n", num3, num4);    // 2 2
}

void prefix(void)
{
    int num1 = 2;
    int num2 = 2;
    int num3;
    int num4;

    num3 = ++num1;    // num3 = 3 num1 = 3
    num4 = --num2;    // num4 = 1 num2 = 1

    printf("%d %d\n", num3, num4);    // 3 1
}

int main(void)
{
    postfix();
    prefix();
    return 0;
}
