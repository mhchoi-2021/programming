#include <stdio.h>

#define NUMBER 7
#define FAILED -1

int search_idx(const int v[],int idx[],int key, in n)
{
    int i, count = 0;

    for(i=0; i < n;i++){
        if(v[i] == key)
            idx[count++] = i;
    }
    return count;
}

int main(void)
{
    int i,ky,num;
    int vx[NUMBER];
    int pt[NUMBER];

    for(i=0; i < NUMBER;i++){
        printf("vx[%d] : ", i);
        scanf("%d",&vx[i]);
    }

    printf("찾을 값 : ");
    scanf("%d", &ky);

    if((num = search_idx(vx,pt,ky,NUMBER))==0)
        puts("\a배열에 해당 값이 없습니다.");
    else {
        printf("%d은(는) %d 개 있습니다.\n", ky, num);

        for(i=0;i<num;i++)
            printf("vx[%d]=%d\n",p[i], vx[pt[i]]);
    }
    return 0;
}