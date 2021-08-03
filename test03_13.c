#include <stdio.h>

int main(void)
{

    int point;
    printf("점수 : ");
    scanf("%d",&point);

    if(point<0||point>100)
        puts("올바르지 않은 점수입니다.");
    else if(point <=59)
        puts("불가");
    else if(point <=69)
        puts("가능");
    else if(point <=79)
        puts("양호");
    else
        puts("우수");

    return 0;
    
}