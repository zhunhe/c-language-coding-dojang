#include<stdio.h>
 
int main(void)
{
    int num1 = 1;
    int num2 = 0;
 
    printf("%s\n", num1 && num2 ? "참" : "거짓"); // 1 && 0 is 0 따라서 "거짓"
    printf("%s\n", num1 || num2 ? "참" : "거짓"); // 1 || 0 is 1 따라서 "참"
 
    return 0;
}
