#include <stdio.h>

int main()
{
    int decimal;
    int binary[20] = { 0, };
    int position = 0;

    scanf("%d", &decimal);

    while (decimal > 0)
    {
        binary[position] = decimal % 2;
        decimal /= 2;
        position++;
    }
    for (int i = position - 1; i >= 0; i--)
    {
        printf("%d", binary[i]);
    }
    printf("\n");

    return 0;
}
