#include <stdio.h>

int main()
{
    int num1 = 0;

    while (1)   // 무한루프
    {
        num1++;

        printf("%d\n", num1);

        if (num1 == 100)
            break;  // while문 탈출
    }

    return 0;
}
