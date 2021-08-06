#include <stdio.h>

int main(void)
{
    int no;
    printf("양의 정수를 입력하세요.");
    scanf("%d",&no);

    if(no>=1){
        while(no>=1)
            printf("%d ", no--);
        printf("\n");
    }

    return 0;
    
}