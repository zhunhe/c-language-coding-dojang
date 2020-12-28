#include <stdio.h>
#include <string.h>

int main()
{
    char buffer[10] = { 0, };

    FILE *fp = fopen("words.txt", "r");

    fseek(fp, 7, SEEK_SET);
    fread(buffer, 4, 1, fp);

    printf("%s", buffer);

    memset(buffer, 0, sizeof(buffer));

    fseek(fp, -6, SEEK_END);
    fread(buffer, 2, 1, fp);

    printf("%s\n", buffer);

    fclose(fp);

    return 0;
}
