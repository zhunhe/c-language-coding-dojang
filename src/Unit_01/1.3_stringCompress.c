#include<stdio.h>
#include<string.h>

int main(void)
{
	char *s1 = "aaaaabbbccccccddddddddd";
	char s2[30] = {0,};
    int length = strlen(s1);

    char ch[2] = {0,};
    ch[0] = s1[0];
    int count = 0;
    char countStr[10] = {0,};

    printf("before: %s \n", s1);
    for (int i = 1; i <= length; i++)
    {
        if(ch[0] == s1[i])
        {
            count++;
        }
        else
        {
            strcat(s2, ch);
            sprintf(countStr, "%d", count);
            strcat(s2, countStr);

            ch[0] = s1[i];
            count = 1;
        }
    }
    printf("after: %s \n", s2);

    return 0;
}
