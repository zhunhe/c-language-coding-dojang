#include <stdio.h>

int fib(int n)
{
    if (n<=1) return n;
    
    return fib(n-2) + fib(n-1);
}

int main()
{
    int num1;

    scanf("%d", &num1);

    printf("%d\n", fib(num1));

    return 0;
}
