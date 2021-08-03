#include <stdio.h>

int main(void)
{
    int a,b,diff;
    puts("2개의 정수를 입력하세요.");
    printf("정수A:");
    scanf("%d", &a);
    printf("정수B:");
    scanf("%d",&b);

    diff = a-b;

    if(diff >10 || diff <-10)
        puts("두 값의 차이는 11 이상입니다.");
    else
        puts("두 값의 차이는 10 이하입니다.");
    return 0;
    
}