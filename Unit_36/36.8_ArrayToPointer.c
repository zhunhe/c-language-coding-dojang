#include <stdio.h>

int main()
{
    int numArr[10] = { 11, 22, 33, 44, 55, 66, 77, 88, 99, 110 };

    int *numPtr = numArr;   // 포인터에 배열 할당

    printf("%d\n", *numPtr);            // 11
    printf("%d\n", *numArr);            // 11
    printf("%d\n", numPtr[5]);          // 66
    printf("%lu\n", sizeof(numArr));    // 4 * 10 = 40
    printf("%lu\n", sizeof(numPtr));    // 64비트이므로 8

    return 0;
}
