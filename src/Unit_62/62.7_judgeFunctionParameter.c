#include <stdio.h>

void setAttackSpeed(float stats)
{
    printf("Attack Speed: %f\n", stats);
}

int main()
{
    setAttackSpeed(0.638f);
    setAttackSpeed(1.23f);

    return 0;
}
