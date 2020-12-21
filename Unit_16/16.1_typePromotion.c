#include <stdio.h>
 
int main(void)
{
    int num1 = 11;
    float num2 = 4.4f;
    long long num3 = 123456789000;
    int num4 = 10;
 
    printf("%f\n", num1 + num2);    // 15.400000: 정수와 실수 덧셈. 정수는 실수로 변환됨
    printf("%f\n", num1 - num2);    // 6.600000: 정수와 실수 뺄셈. 정수는 실수로 변환됨
    printf("%f\n", num1 * num2);    // 48.400002: 정수와 실수 곱셈. 정수는 실수로 변환됨
    printf("%f\n", num1 / num2);    // 2.500000: 정수와 실수 나눗셈. 정수는 실수로 변환됨
 
    // int보다 long long이 자료형 크기가 크므로 long long으로 변환됨
    printf("%lld\n", num3 + num4);    // 123456789010
    printf("%lld\n", num3 - num4);    // 123456788990
    printf("%lld\n", num3 * num4);    // 1234567890000
    printf("%lld\n", num3 / num4);    // 12345678900
    return 0;
}
