#include <stdio.h>

int main()
{
    int num1;
    int num2 = 3;

    // 10 + 2 / (5 - 3) * ++num2
    // 10 + 2 / 2 * 4
    // 10 + 1 * 4
    // 10 + 4
    // 14
    num1 = 10 + 2 / (5 - 3) * ++num2;

    printf("%d\n", num1);    // 14
    
    return 0;
}
