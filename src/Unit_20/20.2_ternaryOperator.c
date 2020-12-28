#include <stdio.h> 

int main(void)
{
    int num1 = 10;
    int num2;

    // num1이 10이면 100 아니면 200
    num2 = num1 == 10 ? 100 : 200;
 
    printf("%d\n", num2);
 
    return 0;
}
