#include <stdio.h>

int main(void)
{
    int retry;
    do{
        int no;
        printf("정수를 입력하세요:");
        scanf("%d",&no);
        if(no ==0)
            puts("이 수는 0입니다.");
        else if(no >0)
            puts("이 수는 양수입니다.");
        else
            puts("이 수는 음수입니다.");

        printf("한 번 더? [Yes_0/No_9]: ");
        scanf("%d",&retry);

    }while(retry ==0);

    return 0;
    
}