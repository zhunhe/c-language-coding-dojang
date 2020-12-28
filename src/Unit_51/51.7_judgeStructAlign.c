#include <stdio.h>

#pragma pack(push, 1)
struct Packet {
    char num1;
    short num2;
}
#pragma pack(pop)

int main()
{
    struct Packet pkt;

    printf("%d\n", sizeof(pkt));

    return 0;
}
