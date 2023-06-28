#include <time.h> // rand사용을 위해 
#include <stdlib.h> //time.h만으로 불가능할경우
#include <stdio.h>

int main(void){
    // random값 생성하기 
    //rand() % x : 0부터 x까지의 숫자를 뽑음
    // ex) rand() % 3 : 0 ~ 2
    // ex) rand() %3 +1 : 1 ~ 3

    // 난수 초기화 : 초기화하지않으면 계속해서 같은 패턴의 값이 출력됨
    //srand(time(NULL));

    //난수 초기화 이전
    printf("난수 초기화 전\n");
    for(int i=0;i<10;i++){
        printf("%d   ", rand()%10);
    }
    printf("\n");
    srand(time(NULL));
    printf("난수 초기화 후\n");
    for(int i=0;i<10;i++){
        printf("%d   ", rand()%10);
    }
    printf("\n");


    //가위바위보
    srand(time(NULL));
    int x = rand()%3;
    
    if(x == 0){
        printf("가위\n");
    }else if (x==1){
        printf("바위\n");
    }else if(x==2){
        printf("보\n");
    }else{
        printf("이상함\n");
    }


    return 0;
}