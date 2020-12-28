#include <stdio.h>

int main()
{
    int size;

    scanf("%d", &size);  // 배열크기

    int numArr[size];    // GCC에서는 WARNING

    return 0;
}
