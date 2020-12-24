#include <stdio.h>
#include <stdlib.h>    // malloc, free 함수가 선언된 헤더 파일
#include <string.h>    // memset 함수가 선언된 헤더 파일

struct Point2D {
    int x;
    int y;
};

int main()
{
    struct Point2D *p1 = malloc(sizeof(struct Point2D));

    memset(p1, 0, sizeof(struct Point2D));    // p1을 구조체 크기만큼 0으로 설정

    printf("%d %d\n", p1->x, p1->y);    // 0 0

    free(p1);

    return 0;
}
