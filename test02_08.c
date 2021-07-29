#include <stdio.h>

int main(void)
{
    int n1,n2;
    double d1,d2;

    puts("정수와 실수를 2개씩 입력하세요.");
    printf("정수 n1 : ");
    scanf("%d", &n1);
    printf("정수 n2 : ");
    scanf("%d", &n2);
    printf("정수 d1 : ");
    scanf("%lf", &d1);
    printf("정수 d2 : ");
    scanf("%lf", &d2);
    return 0;
}