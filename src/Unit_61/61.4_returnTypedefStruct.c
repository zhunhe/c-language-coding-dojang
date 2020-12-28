typedef struct _Person {
    char name[20];
    int age;
    char address[100];
} Person, *PPerson;    // 구조체 별칭 Person, 구조체 포인터 별칭 PPerson

PPerson allocPerson()    // Person 구조체 포인터의 별칭을 반환값 자료형으로 지정
{
    PPerson p = malloc(sizeof(Person));    // 구조체 포인터에 동적 메모리 할당

    strcpy(p->name, "홍길동");
    p->age = 30;
    strcpy(p->address, "서울시 용산구 한남동");

    return p;    // 구조체 포인터 반환
}
