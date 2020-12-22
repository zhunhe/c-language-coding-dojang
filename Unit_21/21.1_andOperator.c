#include<stdio.h>

/*
 * 논리연산자 && 
 * a && b - a, b 모두 참일 때 참, 이외에는 거짓
 * (C언어에서는 0만 거짓 나머지는 모두 참이다)
 */
int main(void)
{
    printf("%d\n", 1 && 1);
    printf("%d\n", 0 && 1);
    printf("%d\n", 1 && 0);
    printf("%d\n", 0 && 0);

    printf("%d\n", 2 && 3);

    return 0;
}
