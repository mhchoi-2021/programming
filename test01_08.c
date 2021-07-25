#include <stdio.h>

int main(void)
{
    int no;

    printf("정숫값을 입력하세요: ");
    scanf("%d", &no);
    printf("%d에 12를 더하면 ", no);
    printf("%d입니다.\n", no + 12);

    return 0;
}