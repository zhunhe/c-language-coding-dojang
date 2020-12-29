#include <stdio.h>

static void print()    // main.c에서 print 함수 정의
{
    printf("main.c\n");
}

int main()
{
    print();

    return 0;
}
