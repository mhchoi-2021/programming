#include <stdio.h>

int main(void)
{
    int i,j;
    int height;
    puts("정사각형을 그리시오 ");
    printf("높이는 얼마입니까?");
    scanf("%d", &height);
    
    for(i=1;i<=height;i++){
        for(j=1;j<=height;j++)
            putchar("*");
        putchar('\n');
    }
    return 0;
    
}