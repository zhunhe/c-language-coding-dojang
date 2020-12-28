#include <stdio.h>

#define RGB(r, g, b) ((b)<<16)|((g)<<8)|(r)

int main()
{
    int r, g, b;
    scanf("%d %d %d", &r, &g, &b);
 
    printf("#%06X\n", RGB(r, g, b));
    printf("#%06X\n", RGB(1 & 1, 2 & 2, 3 & 3));

    return 0;

}
