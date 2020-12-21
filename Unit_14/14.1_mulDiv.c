#include <stdio.h>

int main(void)
{
    int num1;
    int num2;

    num1 = 2 * 3;
    num2 = 7 / 2;

    printf("%d\n", num1);    // 6
    printf("%d\n", num2);    // 3: num2가 integer이므로 소수점은 버림

    return 0;
}
