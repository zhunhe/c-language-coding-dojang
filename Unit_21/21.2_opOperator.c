#include<stdio.h>

/*
 * 논리연산자 OR
 * a || b - a, b 둘중에 하나만 참이면 참, 이외에는 거짓
 */
int main(void)
{
    printf("%d\n", 1 || 1);
    printf("%d\n", 1 || 0);
    printf("%d\n", 0 || 1);
    printf("%d\n", 0 || 0);
 
    printf("%d\n", 2 || 3);
    
    return 0;
}
