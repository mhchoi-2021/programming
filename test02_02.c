#include <stdio.h>

int main(void)
{
    int n;
    printf("정수를 입력하세요: :");
    scanf("%d", &n);

    printf("n / 5는 %d 입니다.\n", n/5);
    printf("n %% 5는 %d 입니다.\n", n%5);
    return 0;
}