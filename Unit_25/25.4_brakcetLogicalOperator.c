#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool b1;

    // 우선순위는 ! -> && -> ||
    // (false || false) && !false || false
    // false && !false || false
    // false && true || false
    // false || false
    // false
    b1 = (false || false) && !false || false;

    printf("%d\n", b1); // false -> 0

    return 0;
}
