#include <stdio.h>

int main(void)
{
    int a,b,h;
    puts("사다리꼴의 넓이를 구합니다.");
    printf("윗변 :");
    scanf("%d", &a);
    printf("밑변 :");
    scanf("%d", &b);
    printf("높이 : ");
    scanf("%d", &h);

    printf("넓이는 %f입니다.\n", (a+b)*h/2.0);
    return 0;
    
}