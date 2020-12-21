#include <stdio.h>
 
int main(void)
{
    float num1 = 0.1f;
    char c1 = 'a';
 
    if (num1 == 0.1f)
        printf("num1 is %.1f\n", num1);
 
    if (c1 == 'a')
        printf("c1 is %c\n", c1);
 
    if (c1 == 97)
        printf("c1 is %c\n", c1);
 
    return 0;
}
