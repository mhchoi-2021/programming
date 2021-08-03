#include <stdio.h>

int main(void)
{

    int no;
    printf("정수를 입력하세요:");
    scanf("%d",&no);

    switch(no%2){
        case 0:puts("이 값은 짝수입니다.\n"); break;
        case 1:puts("이 값은 홀수입니다.\n"); break;
    }

    return 0;
    
}