#include <stdio.h>

int main(void)
{
    int no, temp;
    int digits;

    do{
        printf("양의 정수를 입력하세요: ");
        scanf("%d",&no);
        if(no<=0)
            puts("\a양의 정수만 입력해주세요.");

    }while(no<=0);

    temp = no;
    digits = 0;

    while(temp>0){
        temp /= 10;
        digits++;
    }
    printf("%d은(는) %d 자리입니다.\n",no, digits);
    return 0;
    
}