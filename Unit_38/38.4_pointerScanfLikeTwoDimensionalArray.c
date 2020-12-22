#include <stdio.h>
#include <stdlib.h>    // malloc, free 함수가 선언된 헤더 파일

int main()
{
    int row, col;

    scanf("%d %d", &row, &col);

    // m[row][col]
    // 동적 메모리 할당
    int **m = malloc(sizeof(int *) * row);   // (int 포인터 크기 * row)
    for (int i = 0; i < row; i++)
    {
        m[i] = malloc(sizeof(int) * col);    // (int의 크기 * col)
    }

    // 값 입력
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            m[i][j] = i + j;
        }
    }

    // 값 출력
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }

    // 메모리 해제는 할당의 역순
    for (int i = 0; i < row; i++)
    {
        free(m[i]);
    }
    free(m);

    return 0;
}
