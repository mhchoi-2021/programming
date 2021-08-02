#include <stdio.h>

int main(void)
{
    int a,b;
    puts("2개의 정수를 입력하세요:");
    printf("정수 A :");
    scanf("%d",&a);
    printf("정수 B :");
    scanf("%d",&b);

    if(a==b)
        puts("A와 B는 같습니다.");
    else if(a>b)
        puts("A와 B보다 큽니다.");
    else
        puts("A는 B보다 작습니다.");
    return 0;
    
}