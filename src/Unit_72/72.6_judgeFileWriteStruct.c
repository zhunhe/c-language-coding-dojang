#include <stdio.h>
#include <string.h>

#pragma pack(push, 1)
struct X820Firmware {
    int serial;
    char desc[14];
    short tag;
    char mode;
};
#pragma pack(pop)
 
int main()
{
    struct X820Firmware x1;
    memset(&x1, 0, sizeof(x1));

    FILE *fp = stdout;

    x1.serial = 1800891002;
    strcpy(x1.desc, "X820 Firmware");
    x1.tag = 8512;
    x1.mode = '-';

    fwrite(&x1, sizeof(x1), 1, fp);

    fclose(fp);

    return 0;
}
