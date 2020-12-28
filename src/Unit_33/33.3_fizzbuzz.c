#include <stdio.h>

int main()
{
    for (int i = 1; i <= 100; i++)
    {
        if (i % 15 == 0)                // 15의배수
            printf("FizzBuzz\n");
        else if (i % 3 == 0)            // 3의배수
            printf("Fizz\n");
        else if (i % 5 == 0)            // 5의배수
            printf("Buzz\n");
        else
            printf("%d\n", i);
    }

    return 0;
}
