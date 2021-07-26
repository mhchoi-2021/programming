#include <stdio.h>

int main(void)
{
    int x,y;
    puts("2개의 정숫값을 입력하세요.");
    printf("정수 x:");
    scanf("%d", &x);
    printf("정수 y:");
    scanf("%d", &y);

    printf("x 값은 y 값의 %d 입니다.\n", 100*x/y);
    return 0;
}
