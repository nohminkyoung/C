#include <stdio.h>
#include <time.h>
#include <stdlib.h>


//up down 게임 
int main(void){

    srand(time(NULL));

    int num = rand() % 100 +1; //1 ~ 100

    int chance = 5, answer = 0;

    while(chance>0){
        printf("정답은?\n");
        scanf("%d",&answer);

        if(answer==num){
            printf("정답입니다.");
            break;
        }else{
            if(answer>num){
                printf("down\n");
            }else if(answer<num){
                printf("up\n");
            }
            chance--;
        }
    }

    if(chance<=0){
        printf("실패\n");
        printf("정답 : %d\n", num);
    }

}