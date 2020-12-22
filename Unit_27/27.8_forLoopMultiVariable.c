#include <stdio.h>

int main()
{
    // i는 1씩, j는 2씩 증가
    for (int i = 0, j = 0; i < 10; i++, j += 2)
    {
        printf("i: %d, j: %d\n", i, j);
    }

    return 0;
}
