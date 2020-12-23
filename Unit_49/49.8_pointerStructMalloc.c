#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Person {
    char name[20];
    int age;
    char address[100];
};

typedef struct {
    char name[20];
    int number;
    int displacement;
} Car;
 
int main()
{
    struct Person *p1 = malloc(sizeof(struct Person));
    Car *c1 = malloc(sizeof(Car));

    snprintf(p1->name, sizeof(p1->name), "고길동");
    p1->age = 40;
    snprintf(p1->address, sizeof(p1->address), "서울시 서초구 반포동");

    snprintf(c1->name, sizeof(c1->name), "스텔라");
    c1->number = 3421;
    c1->displacement = 2000;

    printf("이름: %s\n", p1->name);
    printf("나이: %d\n", p1->age);
    printf("주소: %s\n", p1->address);

    printf("자동차 이름: %s\n", c1->name);
    printf("자동차 번호: %d\n", c1->number);
    printf("배기량: %dcc\n", c1->displacement);

    free(p1);
    free(c1);

    return 0;
}
