#include <stdio.h>

int main(void)
{
    int i,j,len;

    puts("왼쪽 아래가 직각인 직각이등변삼각형을 만들어 봅시다.");

    printf("짧은 변 : ");
    scanf("%d", &len);

    for(i=1; i<=len;i++){
        for(j=1;j<=i;j++)
            putchar('*');
        putchar('\n');
    }
    
    return 0;
    
}