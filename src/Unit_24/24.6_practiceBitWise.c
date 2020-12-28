#include <stdio.h>
 
int main()
{
    unsigned char flag1 = 1 << 7;
    unsigned char flag2 = 1 << 3;
    
    flag1 |= 4;
    flag1 &= ~128;
    flag2 ^= 8;
 
    printf("%u %u\n", flag1, flag2);
 
    return 0;
}

// result
// 4 0
