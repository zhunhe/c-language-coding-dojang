#include <stdio.h>

int main()
{
    int count;

    scanf("%d", &count);
    
    int i = 1;
    while (1)               // 무한루프
    {
        printf("%d\n", i);

        if (i == count)
            break;          // while문 탈출

        i++;
    }

    return 0;
}
