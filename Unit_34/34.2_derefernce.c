#include <stdio.h>

int main()
{
    int *numPtr;
    int num1 = 10;

    numPtr = &num1;

    // 역참조: numPtr에 저장된 num1의 메모리 주소로부터 저장된 값을 가져옴
    printf("%d\n", *numPtr);

    return 0;
}
