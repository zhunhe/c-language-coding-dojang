#include <stdio.h>
#include <string.h>    // strcmp 함수가 선언된 헤더 파일

int main()
{
    char s1[10] = "Hello";
    char *s2 = "Hello";

    int ret = strcmp(s1, s2);   // 같으면 0

    printf("%d\n", ret);

    return 0;
}
