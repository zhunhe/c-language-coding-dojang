#include <stdio.h>
#include <stdlib.h>    // atoi 함수가 선언된 헤더 파일

int main()
{
    char *s1 = "283";   // string
    int num1;

    num1 = atoi(s1);        // string to integer

    printf("%d\n", num1);   // 283

    return 0;
}
