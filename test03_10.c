#include <stdio.h>

int main(void)
{
    int n1,n2,n3;
    puts("3개의 정수를 입력하세요.");
    printf("정수1:");
    scanf("%d", &n1);
    printf("정수2:");
    scanf("%d",&n2);
    printf("정수3:");
    scanf("%d",&n3);
    printf("최솟값은 %d 입니다.\n",(n1<n2)?((n1<n3)?n1:n3):((n2<n3)?n2:n3));
    return 0;
    
}