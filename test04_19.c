#include <stdio.h>

int main(void)
{
    int no;

    printf("몇 개의 *를 출력할까요? ");
    scanf("%d",&no);

   if(no>0){
       int i;
       for(i=0;i<no;i++){
           putchar("*");
           if(i%5==4)
            putchar('\n');
        }
        if(i%5!=0)
            putchar('\n');
   }
    return 0;
    
}