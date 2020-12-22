#include <stdio.h>

int main()
{
    int num1;

    scanf("%d", &num1);

    // switch-case문에 break가 없을시 밑에 있는 case들도 실행
    switch (num1)
    {
        case 1:
            printf("1입니다.\n");
            // no break
        case 2:
            printf("2입니다.\n");
            // no break
        default:
            printf("default\n");
            // no break
    }

    return 0;
}
