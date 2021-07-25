#include <stdio.h>

int main(void)
{
    int no;

    printf("정숫값을 입력하세요 : ");
    scanf("%d", &no);

    printf("%d에서 6을 빼면 ", no);
    printf("%d입니다.\n", no-6);

    return 0;
}