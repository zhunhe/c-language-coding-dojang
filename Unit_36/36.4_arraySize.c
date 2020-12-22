#include <stdio.h>

int main()
{
    int numArr[10] = { 11, 22, 33, 44, 55, 66, 77, 88, 99, 110 };

    printf("%d\n", sizeof(numArr));                  // int 4byte * 길이 10 = 40
    printf("%d\n", sizeof(numArr) / sizeof(int));    // 40 / 10 = 10

    return 0;
}
