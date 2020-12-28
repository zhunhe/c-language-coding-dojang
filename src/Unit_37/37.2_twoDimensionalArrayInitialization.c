#include <stdio.h>

int main()
{
    // 2차원배열 0으로 초기화
    int numArr[3][4] = { 0, };

    printf("%d\n", numArr[0][0]);    // 0
    printf("%d\n", numArr[1][2]);    // 0
    printf("%d\n", numArr[2][0]);    // 0
    printf("%d\n", numArr[2][3]);    // 0

    return 0;
}
