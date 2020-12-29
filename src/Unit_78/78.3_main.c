#include <stdio.h>

extern int num2;    // 다른 소스 파일(외부)에 있는 전역 변수 num2을 사용

int main()
{
    printf("%d\n", num2);    // 전역 변수 num2의 값 출력

    return 0;
}
