#include <stdio.h>

int main(void)
{
    int no,width;

    printf("몇 개의 *를 출력할까요? : ");
    scanf("%d", &no);
    printf("몇 개마다 줄 바꿈할까요? ");
    scanf("%d", &width);   
    
    if(no>0){
        int i,j;
        int rem=no%width;
        for(i=0;j<no/width;i++){
            for(j=0;j<width;j++)
                putchar('*');
            putchar('\n');
        }
        if(rem>0){
            for(i=0;i<rem;i++)
                puchar('*');
            putchar('\n');
        }
    }
    return 0;
    
}