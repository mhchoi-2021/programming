#include <stdio.h>

int main(void)
{
    int x, y;
    int ave;

    puts("2개의 정숫값을 입력하세요.");
    printf("정수 x :");
    scanf("%d", &x);
    printf("정수 y :");
    scanf("%d", &y);

    ave=(x+y)/2;
    printf("평균값의 부호를 반전한 값은 %d 입니다. \n",-ave);
    return 0;
}