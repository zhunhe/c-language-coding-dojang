#include <stdio.h>
#include <stdlib.h>    // malloc, free 함수가 선언된 헤더 파일

int main()
{
    char *s1 = malloc(sizeof(char) * 10);

    printf("Input String: ");
    scanf("%s", s1);

    printf("%s\n", s1);

    free(s1);

    return 0;
}
