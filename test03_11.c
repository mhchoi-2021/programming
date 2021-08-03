#include <stdio.h>

int main(void)
{
    int a,b,c;
    puts("3개의 정수를 입력하세요.");
    printf("정수A:");
    scanf("%d", &a);
    printf("정수B:");
    scanf("%d",&b);
    printf("정수C:");
    scanf("%d",&c);
    if(a==b && b==c)
        puts("3개 값이 모두 같습니다.");
    else if(a==b || b==c || c==a)
        puts("2개 값이 같습니다.");
    else
        puts("3개 값은 모두 다릅니다.");
    return 0;
    
}