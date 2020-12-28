#include<stdio.h>

int main(void)
{
    int start, end;
    scanf("%d %d", &start, &end);
    for (; start<=end; start++)
    {
        printf((start%5==0) ? ((start%11==0)?("FizzBuzz\n"):("Fizz\n")) : ((start%11==0)?("Buzz\n"):("%d\n")), start);
    }
    return 0;
}
