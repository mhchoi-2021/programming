#include <stdio.h>

int main(void)
{
    int no;

    printf("양의 정수를 입력하세요:");
    scanf("%d",&no);

    if(no>=1){
        int i=1;
        printf("{");
        while(i<no)
            printf("%d ", i++);
        printf("%d}\n",no);
    }
    return 0;
    
}