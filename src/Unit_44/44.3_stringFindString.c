#include <stdio.h>
#include <string.h>    // strstr 함수가 선언된 헤더 파일

int main()
{
    char s1[30] = "A Garden Diary";

    char *ptr = strstr(s1, "den");      // den으로 시작하는 문자열 검색, 포인터 반환

    printf("%s\n", ptr);    // den Diary

    return 0;
}
