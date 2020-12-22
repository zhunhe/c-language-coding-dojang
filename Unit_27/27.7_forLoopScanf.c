#include <stdio.h>

int main()
{
    int count;

    scanf("%d", &count);

    for (int i = 0; i < count; i++)    // 0 ~ count-1
    {
        printf("Hello, world! %d\n", i);
    }

    return 0;
}
