#include <stdio.h>

int main(void)
{
    int num;
    printf("정수를 입력하세요: ");
    scanf("%d", &num);
    if(num < 0)
        mum = -num;

    printf("절댓값은 %d 입니다. \n", num);
    return 0;
    
}