#include <stdio.h>

int main(void)
{
    int n1,n2,diff;
    puts("2개의 정수를 입력하세요.");
    printf("정수1:");
    scanf("%d", &n1);
    printf("정수2:");
    scanf("%d",&n2);

    if(n1>n2)
        diff = n1-n2;
    else
        diff =n2-n1;
    printf("두 값의 차이는 %d 입니다.\n",diff);


    return 0;
    
}