#include <stdio.h>

int main(void)
{
    double height,weight;
    
    printf("키를 입력하세요 : ");
    scanf("%lf", &height);
    printf("몸무게를 입력하세요 : ");
    scanf("%lf", &weight);
    

    printf("BMI는 %.2f입니다.\n", weight / ((height/100.0)*(height/100.0)));
    return 0;
    
}