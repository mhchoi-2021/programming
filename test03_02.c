#include <stdio.h>

int main(void)
{
    int a,b;
    puts("2개의 정수를 입력하세요");
    printf("정수 A:");
    scanf("%d", &a);
    printf("정수 B:");
    scanf("%d",&b);
    if(a%b)
        puts("B는 A의 약수가 아닙니다.");
    else
        puts("B는 A의 약수입니다.");
    
    return 0;
    
}