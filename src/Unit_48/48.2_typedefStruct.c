#include <stdio.h>
#include <string.h>    // strcpy 함수가 선언된 헤더 파일

typedef struct _Person {   // 구조체 이름은 _Person
    char name[20];            // 구조체 멤버 1
    int age;                  // 구조체 멤버 2
    char address[100];        // 구조체 멤버 3
} Person;                  // typedef를 사용하여 구조체 별칭을 Person으로 정의

int main()
{
    Person p1;    // 구조체 별칭 Person으로 변수 선언

    // 점으로 구조체 멤버에 접근하여 값 할당
    strcpy(p1.name, "홍길동");
    p1.age = 30;
    strcpy(p1.address, "서울시 용산구 한남동");

    // 점으로 구조체 멤버에 접근하여 값 출력
    printf("이름: %s\n", p1.name);       // 이름: 홍길동
    printf("나이: %d\n", p1.age);        // 나이: 30
    printf("주소: %s\n", p1.address);    // 주소: 서울시 용산구 한남동

    return 0;
}
