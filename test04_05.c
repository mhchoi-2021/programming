#include <stdio.h>

int main(void)
{
    int i,no;

    printf("양의 정수를 입력하세요.");
    scanf("%d",&no);

    if(no>=1){
        int i=1;
        while(i<=no)
            printf("%d ", i++);
        printf("\n");
    }
    return 0;
    
}