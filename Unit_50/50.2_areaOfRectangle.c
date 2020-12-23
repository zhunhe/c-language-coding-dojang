#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Rectangle {
    int x1, y1;
    int x2, y2;
};

int main()
{
    struct Rectangle rect;
    int area;

    rect.x1 = 20;
    rect.y1 = 20;
    rect.x2 = 40;
    rect.y2 = 30;

    area = (rect.y2-rect.y1) * (rect.x2-rect.x1);

    printf("%d\n", area);

    return 0;
}
