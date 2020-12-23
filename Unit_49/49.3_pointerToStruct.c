#include <stdio.h>

struct Person {    // 구조체 정의
    char name[20];        // 구조체 멤버 1
    int age;              // 구조체 멤버 2
    char address[100];    // 구조체 멤버 3
};

int main()
{
    struct Person p1;
    struct Person *ptr;

    ptr = &p1;

    ptr->age = 30;

    printf("나이: %d\n", p1.age);      // 나이: 30: 구조체 변수의 멤버 값 출력
    printf("나이: %d\n", ptr->age);    // 나이: 30: 구조체 포인터의 멤버 값 출력

    return 0;
}
