#include <stdio.h>

int main()
{
    // 중첩루프는 2차원평면을 다룰 수 있으므로
    // 이미지 처리, 영상 처리, 좌표계 처리 등에 쓰인다.
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
