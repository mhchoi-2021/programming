#include <stdio.h>

int main(void)
{
    int i;
    int sum=0;
    int n;

    printf("n의 값 : ");
    scanf("%d", &n);

    for(i=1;i<=n;i++)
        sum+=i;
    printf("1부터 %d까지의 합은 %d입니다.\n",n,sum);
    
    return 0;
    
}