#include <stdio.h>

int main(void)
{
    int n;

    printf("정수를 입력하세요 : ");
    scanf("%d", &n);

    printf("10을 더하면 %d 입니다. \n", n+10);
    printf("10을 빼면 %d 입니다. \n", n-10);
    printf("10을 곱하면 %d 입니다. \n", n*10);
    printf("10을 나눈 몫은 %d 입니다. \n", n/10);
    printf("10을 나눈 나머지는 %d 입니다. \n", n%10);
    
    return 0;


}