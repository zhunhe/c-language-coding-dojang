#include <stdio.h>
#include <string.h>

int main()
{
    char buffer[10000];
    char temp;
    int size, count;
    
    FILE *fp = fopen("words.txt", "r");

    fseek(fp, 0, SEEK_END);
    size = ftell(fp);
    
    memset(buffer, 0, size + 1);

    fseek(fp, 0, SEEK_SET);
    count = fread(buffer, size, 1, fp);

    for (int i = 0; i < size/2; i++)
    {
        temp = buffer[i];
        buffer[i] = buffer[size-1-i];
        buffer[size-1-i] = temp;
    }
    printf("%s", buffer);

    fclose(fp);

    return 0;
}
