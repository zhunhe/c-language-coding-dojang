#include <stdio.h>
#include <string.h>    // strtok 함수가 선언된 헤더 파일

int main()
{
    char s1[30] = "2015-06-10T15:32:19";

    char *ptr = strtok(s1, "-T:");    // -, T, 콜론을 기준으로 문자열을 자름

    while (ptr != NULL)               // 자른 문자열이 나오지 않을 때까지 반복
    {
        printf("%s\n", ptr);          // 자른 문자열 출력
        ptr = strtok(NULL, "-T:");    // 다음 문자열을 잘라서 포인터를 반환
    }

    return 0;
}
