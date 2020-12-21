#include <stdio.h>
#include <math.h>

int main(void)
{
    printf("%d\n", 1 % 3);  // 나머지 1
    printf("%d\n", 2 % 3);  // 나머지 2

   // 실수의 나머지 연산은 fmod, fmodf, fmodl 함수를 사용
    double num1 = 10.843;
    double num2 = 3.79;
    printf("%f\n", fmod(num1, num2));    // 3.263000

    float num3 = 10.843f;
    float num4 = 3.79f;
    printf("%f\n", fmodf(num3, num4));    // 3.263000

    long double num5 = 10.843l;
    long double num6 = 3.79l;
    printf("%Lf\n", fmodl(num5, num6));    // 3.263000

    return 0;
}
