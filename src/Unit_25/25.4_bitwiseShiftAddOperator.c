#include <stdio.h>

int main()
{
    int num1 = 1;
    int num2 = 2;
    int num3;

    // num1 << 2 + num2 << 1
    // num1 << 4 << 1
    // 16 << 1
    // 32
    num3 = num1 << 2 + num2 << 1;

    printf("%d\n", num3);    // 32
    
    return 0;
}
