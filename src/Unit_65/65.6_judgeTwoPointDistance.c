#include <stdio.h>
#include <math.h>

struct Point2D {
    int x;
    int y;
};

double getDistance(struct Point2D p1, struct Point2D p2)
{
    return sqrt(pow(p2.x-p1.x, 2.0) + pow(p2.y-p1.y, 2.0));
}

int main()
{
    struct Point2D p1;
    struct Point2D p2;

    scanf("%d %d %d %d", &p1.x, &p1.y, &p2.x, &p2.y);

    printf("%f\n", getDistance(p1, p2));

    return 0;
}
