#include <stdio.h>

int main()
{
    int num1 = 10;

    // 0xFFESD1D32와 같이 메모리 주소를 출력
    // 32비트:8자리, 64비트:16자리
    // Mac OS에서는 높은자리수의 0을 생략
    printf("%p\n", &num1);

    return 0;
}
