#include <stdio.h>
#include <string.h>

#pragma pack(push, 1)
struct X850Firmware {
    short serial;
    char mode;
    char desc[20];
    int version;
};
#pragma pack(pop)

int main()
{
    struct X850Firmware x;
    
    FILE *fp = fopen("x850.bin", "rb");
    fread(&x, sizeof(x), 1, fp);
    
    printf("%d\n%c\n%s\n%d\n", x.serial, x.mode, x.desc, x.version);
    
    fclose(fp);
    
    return 0;
}
