#include <stdio.h>

int main()
{
    char s1[10];
    char s2[20];
    int num1;
    float num2;

    scanf("%d %f", &num1, &num2);

    snprintf(s1, sizeof(s1), "%d", num1);
    snprintf(s2, sizeof(s2), "%f", num2);

    printf("%s\n", s1);
    printf("%s\n", s2);

    return 0;
}
