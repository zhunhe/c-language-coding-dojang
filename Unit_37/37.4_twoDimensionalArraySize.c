#include <stdio.h>

int main()
{
    int numArr[3][4] = {
        { 11, 22, 33, 44 },
        { 55, 66, 77, 88 },
        { 99, 110, 121, 132 }
    };

    printf("%d\n", sizeof(numArr));    // 세로3 * 가로4 * 4바이트 = 48

    // 4: 가로길이
    // 가로 한 줄 크기 / 자료형 크기
    int col = sizeof(numArr[0]) / sizeof(int);
    // 3: 세로길이
    // 전체 배열 크기 / 가로 한 줄 크기
    int row = sizeof(numArr) / sizeof(numArr[0]);

    printf("%d\n", col);    // 4
    printf("%d\n", row);    // 3

    return 0;
}
