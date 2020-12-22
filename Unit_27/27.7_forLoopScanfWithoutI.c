#include <stdio.h>

int main()
{
    int count;

    scanf("%d", &count);

    for (; count > 0; count--)    // i없이 count 바로 이용
    {
        printf("Hello, world! %d\n", count);
    }

    return 0;
}
