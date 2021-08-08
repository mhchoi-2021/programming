#include <stdio.h>

int main(void)
{
    int i,j,k;
    int a[4][3];
    int b[3][4];
    int c[4][4];

    printf("4행 3열 a와 3행 4열 b의 곱을 c로 구합니다.\n");

    puts("a의 각 요소 값을 입력하세요:");
    for(i=0;i<4;i++){
        for(j=0;j<3;j++){
            printf("a[%d][%d] : ", i,j);
            scanf("%d", &a[i][j]);
        }
    }

    puts("b의 각 요소 값을 입력하세요.");
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            printf("b[$d][%d] : ",i,j);
            scanf("%d",&b[i][j]);
        }
    }

    puts("c의 값은 다음과 같습니다. ");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("c[%d][%d] = %d\n",i,j,c[i][j]);
        }
    }

    return 0;    
}