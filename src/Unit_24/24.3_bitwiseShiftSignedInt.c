#include <stdio.h>
 
int main()
{
    unsigned char num1 = 131;    // 1000 0011
    char num2 = -125;            // 1000 0011
 
    unsigned char num3;
    char num4;

    // 1000 0011(131)
    // _________ >> 5
    // 0000 0100(4)
    num3 = num1 >> 5;
    // 1000 0011(-125)
    // _________ >> 5
    // 1111 1100(4)
    num4 = num2 >> 5;
 
    printf("%u\n", num3);
    printf("%d\n", num4);
 
    return 0;
}
