#include <stdio.h>
#include <string.h>

struct Person {
    char name[20];      // 이름
    int age;            // 나이
    char address[100];  // 주소
};

int main()
{
    struct Person p1;

    // 값 할당
    strcpy(p1.name, "홍길동");
    p1.age = 30;
    strcpy(p1.address, "서울시 용산구 한남동");

    // 출력
    printf("이름: %s\n", p1.name);       // 이름: 홍길동
    printf("나이: %d\n", p1.age);        // 나이: 30
    printf("주소: %s\n", p1.address);    // 주소: 서울시 용산구 한남동

    return 0;
}
