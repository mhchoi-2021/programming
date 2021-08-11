#include <stdio.h>

int min2(int a, int b)
{
    return (a<b)?a:b;
}

int main(void)
{
    int n1,n2;
    puts("정수 2개를 입력하세요. ");
    printf("정수 1 : ");
    scanf("%d", &n1);
    printf("정수 2 : ");
    scanf("%d", &n2);

    printf("작은 쪽의 값은 %d입니다.\n", min2(n1,n2));

    return 0;
}
