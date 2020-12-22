#include <stdio.h>

int main()
{
    int numArr[3][4] = {
        { 11, 22, 33, 44 },
        { 55, 66, 77, 88 },
        { 99, 110, 121, 132 }
    };

    // 2차원 배열 포인터에 할당
    int (*numPtr)[4] = numArr;

    printf("%p\n", *numArr);            // 배열 메모리 주소
    printf("%p\n", *numPtr);            // 배열 메모리 주소와 같음
    printf("%d\n", numPtr[2][1]);       // 110
    printf("%lu\n", sizeof(numArr));    // 4 * 12 = 48
    printf("%lu\n", sizeof(numPtr));    // 64bit이므로 8

    return 0;
}
