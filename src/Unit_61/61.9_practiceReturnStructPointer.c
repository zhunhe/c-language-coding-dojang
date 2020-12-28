#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Person {
    char name[20];
    int age;
};

struct Person *allocPerson()
{
    struct Person *p = malloc(sizeof(struct Person));

    strncpy(p->name, "Kayle", sizeof(p->name));
    p->age = 22;

    return p;
}

int main()
{
    struct Person *p1;

    p1 = allocPerson();

    printf("%s\n", p1->name);
    printf("%d\n", p1->age);

    free(p1);

    return 0;
}
