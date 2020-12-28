#include <stdio.h>

int main()
{
    int count;

    scanf("%d", &count);

    for (int i = 1; i <= count; i++)
    {
        if (i % 2 != 0)     // i가 홀수면
            continue;       // 실행하지 않고 건너뜀

        printf("%d\n", i);
    }

    return 0;
}
