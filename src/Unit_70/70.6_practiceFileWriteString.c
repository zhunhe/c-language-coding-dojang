#include <stdio.h>
#include <string.h>

int main()
{
    char s1[20] = "안녕하세요.";

    FILE *fp = fopen("hello.txt", "w");

    fprintf(fp, "%s", s1);

    fclose(fp);

    return 0;
}
