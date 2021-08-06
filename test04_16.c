#include <stdio.h>

int main(void)
{
    int height;
    int lower,upper,step;

    printf("몇 cm부터 : ");
    scanf("%d", &lower);
    printf("몇 cm까지 : ");
    scanf("%d", &upper);
    printf("몇 cm마다 : ");
    scanf("%d", &step);

    for(height= lower; height <=upper;height +=step)
        printf("%dcm %.2fkg\n", height, (height-100)*0.9);
    return 0;
    
}