#include <stdio.h>

#pragma pack(push, 1)
struct Packet {
    short length;
    int seq;
};
#pragma pack(pop)

int main()
{
    struct Packet pkt;

    printf("%d\n", sizeof(pkt));

    return 0;
}
