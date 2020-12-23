#include <stdio.h>
#include <string.h>   // strrchr 함수가 선언된 헤더 파일

int main()
{
    char s1[30] = "A Garden Diary";

    char *ptr = strrchr(s1, 'a');      // 끝에서부터 'a'로 시작하는 문자열 검색. 포인터 반환

    printf("%s\n", ptr);   // ary

    return 0;
}
