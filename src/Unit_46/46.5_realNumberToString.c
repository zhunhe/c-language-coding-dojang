#include <stdio.h>     // sprintf 함수가 선언된 헤더 파일

int main()
{
    char s1[10];
    char s2[20];
    float num1 = 38.972340f;

    sprintf(s1, "%f", num1);
    sprintf(s2, "%e", num1);

    printf("%s\n", s1);        // 38.972340
    printf("%s\n", s2);        // 3.897234e+01

    return 0;
}
