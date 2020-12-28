#include <stdio.h>

int main()
{
    int num1 = 10;
    char c1 = 'a';
    int *numPtr1 = &num1;
    char *cPtr1 = &c1;

    // void포인터 범용포인터라고도 부름
    // 자료형이 다른 포인터와도 저장이 가능
    void *ptr;

    // 포인터 자료형이 달라도 컴파일 경고가 발생하지 않음
    ptr = numPtr1;    // void 포인터에 int 포인터 저장
    ptr = cPtr1;      // void 포인터에 char 포인터 저장

    // 포인터 자료형이 달라도 컴파일 경고가 발생하지 않음
    numPtr1 = ptr;    // int 포인터에 void 포인터 저장
    cPtr1 = ptr;      // char 포인터에 void 포인터 저장

    return 0;
}
