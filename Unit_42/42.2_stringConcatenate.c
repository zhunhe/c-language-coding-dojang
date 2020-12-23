#include <stdio.h>
#include <string.h>    // strcat 함수가 선언된 헤더 파일

int main()
{
    char s1[10] = "world";
    char s2[20] = "Hello";

    strcat(s2, s1);        // s2 뒤에 s1를 붙임

    printf("%s\n", s2);    // Helloworld

    return 0;
}
