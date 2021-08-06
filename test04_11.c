#include <stdio.h>

int main(void)
{
    int i,no;

    printf("양의 정수 : ");
    scanf("%d",&no);

    if(no>=1){
        int i=1;
        while(i<=no){
            if(i%2)
                putchar('+');
            else
                putchar('-');
            i++;
        }
        putchar("\n");
    }
    return 0;
    
}