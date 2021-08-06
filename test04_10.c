#include <stdio.h>

int main(void)
{
    int i,no;

    printf("양의 정수 : ");
    scanf("%d",&no);

    while(no-- > 0)
        puts("*");
    return 0;
    
}