#include <stdio.h>
#include <limits.h>

int main(void)
{
    printf("char형은 %u바이트\n", (unsigned)sizeof(char));
    printf("short형은 %u바이트\n", (unsigned)sizeof(short));
    printf("int형은 %u바이트\n", (unsigned)sizeof(int));
    printf("long형은 %u바이트 \n", (unsinged)sizeof(long));
    
    return 0;
}