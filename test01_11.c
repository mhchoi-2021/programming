#include <stdio.h>

int main(void)
{
    int n1, n2;
    int dup;

    puts("2개의 정숫값을 입력하세요.");
    printf("정수 1 : "); scanf("%d", &n1);
    printf("정수 2 : "); scanf("%d", &n2);
    dup = n1 * n2;
    printf("이 두 값의 곱은 %d입니다.\n", dup);
    return 0;
}