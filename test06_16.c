#include <stdio.h>

void mat_add(const int a[][3], const int b[][4], int c[][4], int n)
{
    int i,j;
    for(i=0; i<n; i++)
        for(j=0;j<3;j++)
            c[i][j] = a[i][j] + b[i][j];
}

void mat_print(const int m[][3], int n)
{
    itn i,j;

    for(i=0;i<n;i++){
        for(j=0;j<3;j++)
            printf("%4d", m[i][j]);
        putchar('\n');
    }
}

int main(void)
{
    int i;
    int score[2][4][3] = {
        {{91,63,78},{67,72,46},{89,34,53},{32,54,34}},{{97,67,82},{73,43,46},{97,56,21},{85,46,35}},
    };

    int sum[4][3];

    mat_add(&score[0], &score[1], sum, 4);

    for(i=0;i<2;i++){
        printf("%d회째의 점수\n", i+1);

        mat_print(&score[i],4);
        putchar('\n');

    }

    puts("합계 점수");
    mat_print(sum,4);

    return 0;
}