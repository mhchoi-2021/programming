#include <stdio.h>

int main(void)
{
    int n1,n2,n3,n4,max;

    puts("4개의 정수를 입력하세요:");
    printf("정수 1 :");
    scanf("%d",&n1);
    printf("정수 2 :");
    scanf("%d",&n2);
    printf("정수 3 :");
    scanf("%d",&n3);
    printf("정수 4 :");
    scanf("%d",&n4);


    max =n1;
    if(n2>max)max=n2;
    if(n3>max)max=n3;
    if(n4>max)max=n4;
    printf("최댓값은 %d입니다.\n", max);
    return 0;
    
}