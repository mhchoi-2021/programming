#include <stdio.h>

int main(void)
{
    unsinged a,b,c;

    printf("a : ");
    scanf("%u", &a);
    printf("b : ");
    scanf("%u", &b);
    printf("c : ");
    scanf("%u", &c);

    printf("a & b == b & c의 값은 %u입니다.\n", a&b == b&c);
    return 0;
}