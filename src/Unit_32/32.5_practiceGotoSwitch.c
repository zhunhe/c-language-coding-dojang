#include <stdio.h>

int main()
{
    int num1 = 1;

    for (int i = 0; i < 10; i++)
    {
        switch (num1)
        {
            case 1:
                printf("1입니다.\n");
                // 반복문 안의 switch에서 탈출할 수 있다
                goto EXIT:
            default:
                break;
        }
    }

EXIT:
    return 0;
}
