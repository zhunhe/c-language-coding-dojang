#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    long long num1;
    char text[30];
    int length;
    bool isPalindrome = true;

    printf("Input integer: ");
    scanf("%lld", &num1);

    snprintf(text, sizeof(text), "%lld", num1);
    length = strlen(text);

    int begin = 0;
    int end = length - 1;
    while (begin < end)
    {
        if (text[begin] != text[end])
        {
            isPalindrome = false;
            break;
        }
        begin++;
        end--;
    }

    if (isPalindrome)
        printf("%lld is palindrome", num1);
    else
        printf("%lld is not palindrome", num1);

    return 0;
}
