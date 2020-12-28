#include <stdio.h>
 
int main(void)
{
    int num1 = 10;

    // 참이면 1 거짓이면 0
    printf("%d\n", num1 == 10);    // 같은지
    printf("%d\n", num1 != 5);     // 다른지
    printf("%d\n", num1 > 10);     // 큰지
    printf("%d\n", num1 < 10);     // 작은지
    printf("%d\n", num1 >= 10);    // 크거나 같은지
    printf("%d\n", num1 <= 10);    // 작거나 같은지
 
    return 0;
}
