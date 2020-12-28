#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numArr[10] = { 11, 22, 33, 44, 55, 66, 77, 88, 99, 110 };

    // sizeof(numArr)/sizeof(int)
    // 혹은 sizeof(numArr)/sizeof(numArr[0]))
    for (int i = 0; i < sizeof(numArr) / sizeof(int); i++)
    {
        printf("%d\n", numArr[i]);
    }

    return 0;
}
