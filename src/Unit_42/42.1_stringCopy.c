#include <stdio.h>
#include <string.h>    // strcpy 함수가 선언된 헤더 파일

int main()
{
    char s1[10] = "Hello";
    char s2[10];

    strcpy(s2, s1);        // s1의 문자열을 s2로 복사
    
    printf("%s\n", s2);    // Hello

    return 0;
}
