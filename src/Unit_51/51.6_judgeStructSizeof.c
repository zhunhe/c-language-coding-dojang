#include <stdio.h>

struct EncryptionHeader {
    char flags;
    int num1;
    int num2;
};
 
int main()
{
    struct EncryptionHeader header;
 
    printf("%d\n", sizeof(header));

    return 0;
}
