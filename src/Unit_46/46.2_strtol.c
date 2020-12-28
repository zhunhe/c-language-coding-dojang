#include <stdio.h>
#include <stdlib.h>    // strtol 함수가 선언된 헤더 파일

int main()
{
    char *s1 = "0xaf10";    // string
    int num1;

    num1 = strtol(s1, NULL, 16);    // string to hexadecimal

    printf("%x %d\n", num1, num1);  // af10 44816

    return 0;
}
