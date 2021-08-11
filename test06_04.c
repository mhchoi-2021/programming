#include <stdio.h>


int sqr(int x)
{
    return x*x;
}

int pow4(int x)
{
    return sqr(x)*sqr(x)
}
int main(void)
{
    int n;
    printf("정숫값 : ");
    scanf("%d",&n);

    printf("%d의 3제곱 값은 %d입니다.\n",n,pow4(n));

    return 0;
}
