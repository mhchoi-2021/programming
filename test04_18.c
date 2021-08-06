#include <stdio.h>

int main(void)
{
    int i,n;

    printf("n의 값 : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
        printf("%d 의 제곱은 %d\n",i,i*i);
    
    return 0;
    
}