#include <stdio.h>

int main()
{
    for (int i = 1; i <= 100; i++)    // 1 ~ 100
    {
        if (i % 2 != 0) // 홀수이면
            continue;   // 다음 반복으로(밑의 코드 실행 X)

        printf("%d\n", i);
    }

    return 0;
}
