#include <stdio.h>

int main()
{
    int numArr[10];     // 길이가 10인 배열
    
    numArr[0] = 11;
    numArr[1] = 22;
    numArr[2] = 33;
    numArr[3] = 44;
    numArr[4] = 55;
    numArr[5] = 66;
    numArr[6] = 77;
    numArr[7] = 88;
    numArr[8] = 99;
    numArr[9] = 110;

    printf("%d\n", numArr[0]);    // index 0: 11
    printf("%d\n", numArr[5]);    // index 5: 66
    printf("%d\n", numArr[9]);    // index 9: 110

    return 0;
}
