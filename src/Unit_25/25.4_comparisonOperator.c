#include <stdio.h>

int main()
{
    int num1;

    // 5 == 5 < 10
    // 5 == 1
    // 0
    num1 = 5 == 5 < 10;

    printf("%d\n", num1);    // 0

    return 0;
}
