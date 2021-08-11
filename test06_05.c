#include <stdio.h>


int sumup(int n)
{
    int i;
    int sum=0;
    for(i=1;i<=n;i++)
        sum+=i;

    return sum;
}

int main(void)
{
    int no;
    printf("정숫값 : ");
    scanf("%d",&no);

    printf("1부터 %d까지의 합은 %d입니다.\n",no,sumup(no));

    return 0;
}
