#include <stdio.h>
#include <string.h>

int main()
{
    char text[30] = "Hello";
    int length;

    length = strlen(text);

    for (int i = 0; i < length - 1; i++)
    {
        printf("%c%c\n", text[i], text[i + 1]);    // 현재 문자와 그다음 문자 출력
    }

    return 0;
}
