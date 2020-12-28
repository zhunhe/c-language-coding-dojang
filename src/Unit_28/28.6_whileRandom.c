#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    int i = 0;
    while (i != 3)
    {
        i = rand() % 10;    // 0~9 정수 생성
        printf("%d\n", i);
    }

    return 0;
}
