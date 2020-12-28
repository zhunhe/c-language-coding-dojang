#include<stdio.h>

/*
 * 논리연산자 NOT
 * !a - a가 참이면 거짓, a가 거짓이면 참
 */
int main(void)
{
    printf("%d", !1);   // 1(참)이므로 결과는 0(거짓)
    printf("%d", !0);   // 0(거짓)이므로 결과는 1(참)

    printf("%d", !3);   // 3(참)이므로 결과는 0(거짓)

    return 0;
}
