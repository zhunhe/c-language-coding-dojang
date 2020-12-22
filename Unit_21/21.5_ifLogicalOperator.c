#include<stdio.h>
 
int main(void)
{
    int num1 = 1;
    int num2 = 0;
 
    if (num1 && num2)   // 1 && 0 is 0
        printf("참\n");
    else
        printf("거짓\n");   // <
 
    if (num1 || num2)   // 1 || 1 is 1
        printf("참\n");     // <
    else
        printf("거짓\n");
 
    if (!num1)          // !1 is 0
        printf("참\n");
    else
        printf("거짓\n");   // <

    // 밑의 if 조건문처럼 나눗셈에서 0으로 나눌 경우 에러가 발생하게 되는데 
    // 논리연산자 &&는 왼쪽의 수식이 거짓일 경우
    // 오른쪽의 수식의 참, 거짓 여부를 판단하지 않는다
    // 따라서 num2가 0인 경우에도 에러가 발생하지 않는다
    if ((num2 != 0) && (num1 / num2) < 20)
        printf("참\n");
    else
        printf("거짓\n");
 
    return 0;
}
