#include <stdio.h>

int main(void)
{
    int no;

    printf("양의 정수 : ");
    scanf("%d",&no);

    if(no>=1){
        while(no-- > 0)
            putchar('*');
        putchar('\n');
    }
    return 0;
    
}