#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    char word[30];
    int length;
    bool isPalindrome = true;

    printf("Input word: ");
    scanf("%s", word);
    
    length = strlen(word);
    
    // 0부터 문자열 길이의 절반만큼 반복
    for (int i = 0; i < length / 2; i++)
    {
        // 왼쪽 문자와 오른쪽 문자를 비교하여 문자가 다르면
        if (word[i] != word[length - 1 - i])
        {
            // 회문이 아님
            isPalindrome = false;
            break;
        }
    }
    printf("%d\n", isPalindrome);

    return 0;
}
