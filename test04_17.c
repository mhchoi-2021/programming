#include <stdio.h>

int main(void)
{
    int i,no;

    printf("정숫값 : ");
    scanf("%d",&no);

    for(i=1;i<=no;i+=2)
        printf("%d ",i);
    putchar('\n');
    return 0;
    
}