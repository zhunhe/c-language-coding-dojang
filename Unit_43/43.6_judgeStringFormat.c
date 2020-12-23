#include <stdio.h>
#include <string.h>

int main()
{
    int number;
    char name[31], result[40];

    scanf("%d %s", &number, name);
    memset(result, 0x00, sizeof(result));
    switch (number)
    {
        case 1:
            snprintf(result, sizeof(result), "%dst %s", number, name);
            break;
        case 2:
            snprintf(result, sizeof(result), "%dnd %s", number, name);
            break;
        case 3:
            snprintf(result, sizeof(result), "%drd %s", number, name);
            break;
        default:
            snprintf(result, sizeof(result), "%dth %s", number, name);
            break;
    }

    printf("%s\n", result);

    return 0;
}
