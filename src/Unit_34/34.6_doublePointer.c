#include <stdio.h>

int main()
{
    int *numPtr1;
    int **numPtr2;    // 이중 포인터 선언
    int num1 = 10;

    // numPtr1 -> num1
    numPtr1 = &num1;

    // numPtr2 -> numPtr1 -> num1
    numPtr2 = &numPtr1;

    printf("%d\n", **numPtr2);    // 20: 포인터를 두 번 역참조하여 num1의 메모리 주소에 접근

    return 0;
}
