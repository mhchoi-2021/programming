#include <stdio.h>

int main(void)
{
    int a,b;
    puts("2개의 정수를 입력하세요:");
    printf("정수 a :");
    scanf("%d",&a);
    printf("정수 b :");
    scanf("%d",&b);

    puts("등가식의 값");
    printf("a==b의 값 : %d\n", a==b);
    printf("a!=b의 값 : %d\n", a!=b);
    puts("관계식의 값");
    printf("a<b의 값 : %d\n", a<b);
    printf("a<=b의 값 : %d\n", a<=b);
    printf("a>b의 값 : %d\n", a>b);
    printf("a>=b의 값 : %d\n", a>=b);
    return 0;
    
}