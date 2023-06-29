// 정답을 포함한 4개의 값 을 2~3개로 조합해 조합을 보여준 후 그 중 정답이 무엇인지 찾는 게임

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){

    srand(time(NULL));

    int answer =  rand() % 4; // 0 ~ 3의 값 정답

    // 2개의 조합을 보여주면 다음은 3개의 조합을 보여주도록 만들기 위함
    int cnt = 0; //보여줄 조합에 포함되는 숫자의 개수
    int prev = 0; // 이전 순서에 보여준 조합의 숫자 개수

    //3번의 조합 보여주기
    for(int i = 1; i<=3; i++){
        
        int bottle[4] = {0,0,0,0};
        
        do {
            cnt = rand() % 2 + 2; // 2~3 사이의 값을 뽑기 
        } while (cnt == prev); // 이전뽑은 값과 현재 뽑은값이 같을경우 다시 뽑기 
        
        prev = cnt;
        printf(" > %d번째 조합 : ", i);

        int includeanswer = 0; // 정답이 포함되어있는지 확인용

        // 보여줄 값 선택 bottle의 원소 중 1인값만 보여줌
        for(int j = 0; j<cnt; j++){

            
            int randbottle = rand() % 4; 

            if(bottle[randbottle]==0){
                bottle[randbottle] = 1;

                if(randbottle == answer){
                    includeanswer = 1;
                }
            }else{
                j--; //이미 선택된경우 다른값을 다시 선택하기 위해 
            }
        }

        //선택된 값 출력
        for(int k = 0; k<4; k++){
            if(bottle[k]==1){
                printf("%d ",k + 1); //index값을 보여줘야함    
            }
        }

        if(includeanswer==1){
                    printf("\n");
                    printf("정답 포함");
                }else{
                    printf("\n");
                    printf("정답 미 포함\n");
                }
        printf("\n계속하려면 아무키나 \n");
        getchar(); //다음으로 넘어가기 전 대기를 위함
    }

    int user_input;
    printf("정답은??\n");
    scanf("%d", &user_input);

    if(user_input == answer+1){ // answer 은 0부터 user는 1부터 
        printf("정답입니다.\n");
    }else{
        printf("오답입니다.\n");
        printf("정답은 : %d\n",answer+1);
    }


    return 0;
    
}