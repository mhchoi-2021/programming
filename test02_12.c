#include <stdio.h>

int main(void)
{
    int height;
    
    printf("키를 입력하세요 : ");
    scanf("%d", &height);

    printf("표준체중은 %.f입니다.\n", (height -100 )*0.9);
    return 0;
    
}