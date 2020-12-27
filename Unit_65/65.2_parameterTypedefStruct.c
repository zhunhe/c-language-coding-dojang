typedef struct _Person {
    char name[20];
    int age;
    char address[100];
} Person, *PPerson;    // 구조체 별칭 Person, 구조체 포인터 별칭 PPerson

void setPerson(PPerson p)    // Person 구조체 포인터의 별칭을 매개변수로 지정
{
    strcpy(p->name, "고길동");
    p->age = 40;
    strcpy(p->address, "서울시 서초구 반포동");
}
