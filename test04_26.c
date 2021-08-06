#include <stdio.h>

int main(void)
{
    int no,width;

    printf("몇 개를 출력할까요? : ");
    scanf("%d", &no);
    printf("몇 개마다 줄 바꿈할까요? ");
    scanf("%d", &width);   
    
    if(no>0){
        int i,j;
        int rem=no%width;
        int wid=width/2;
        int odd=width%2;

        for(i=0;j<no/width/2;i++){
            for(j=0;j<width/2;j++)
                printf('+-');
            putchar('\n');
        }
        if(no/width%2){
            for(j=0;j<wid;j++) printf("+-"); if(odd) putchar("+");
            putchar('\n');
        }
        if(rem>0){
            switch(no/width%2){
                case 0 : for(j=0;j<rem/2;j++)printf("+-");
                    if(rem%2)putchar('+');
                    break;
                case 1 : for(j=0;j<rem/2;j++)printf("-+");
                    if(rem%2)putchar('-');
                    break;
            }
            putchar('\n');
        }
    }
    return 0;
    
}