// 시간에 따라 배열에 포함되어있는 숫자가 점점 줄어들고, 각 array의 요소에 값을 추가해 오래 0이되기 전까지 버텨내는 게임

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//전역변수 
int level; //level에 따라 감소되는 값의 크기가 다름
int array[6];
int *cursor; // 사용자의 선택을 받아냄(array의 index로 사용)


// 함수선언 
void initData();
void printValue();
void decrease(long time);
int check_alive();


int main(void){

    long startTime = 0 ; // 게임이 시작될 때 의 시간
    int num; //사용자의 입력값
    
    long total_time = 0; //게임의 총 시간
    long click_time = 0; //사용자가 마지막에 값을 입력한 시간
    
    initData();//값 초기화 함수 

    startTime = clock(); //프로그램이 시작된 시간 기록1
    cursor = array; //array의 주소를 cursor에 저장


    //게임 
    while(1){
        printValue(); // array의 각 값을 출력해주는 함수

        printf("몇 번의 값을 증가?\n");
        scanf("%d", &num);

        //입력된 번호가 잘못되었을 경우 
        if (num<1 || num >6){
            printf("\n잘못된 값\n");
            continue;
        }

        //총 진행시간 : 현재 시스템 시간 - 시작시간
        //s단위 맞춰주기 위해서 10으로 나눠줌
        total_time = (clock() - startTime)/10; 
        printf("총 경과 시간 : %ld\n", total_time);

        click_time = total_time - click_time;
        printf("최근 경과 시간 : %ld\n", click_time);

        decrease(click_time); //값을 감소시키는 함수


        // 값 증가시키기 
        // 1. 배열의 값이 이미 0일떄 
        if(cursor[num-1]< 0){
            printf("이미 종료된 index\n");
        }
        //2. 0 < x < 100의 값
        else if(cursor[num - 1] + 1 <= 100 ){
            printf("%d번에 값 추가\n\n",num);
            cursor[num-1] +=1;
        }else if (100 < cursor[num - 1] + 1){
            printf("이미 가득 참\n");
        }
        
        //20초에 한번씩 레벨업
        if (total_time/20 > level -1){
            level += 1;
            printf("level up : %d -> %d", level-1, level);

            if (level >= 5){
                printf("최대 달성, 종료");
                break; //exit(0);
            }
        }

        // 배열값이 모두 0이되면 종료
        if(check_alive() == 0){
            printf("모두 0, 종료");
            break;
        }else{
            printf("계속 진행\n");
        }

        click_time = total_time; 
    }



    return 0;
}

//시작 전 초기화 
void initData(){

    level = 1; //레벨 초기화

    for(int i = 0; i<6; i++){
        array[i] = 100;
    }
}

//값 출력 
void printValue(){
    printf("%4d번 %4d번 %4d번 %4d번 %4d번 %4d번\n", 1,2,3,4,5,6);
    
    for(int i = 0; i<6; i++){

        printf("   %3d ", array[i]);
    }

    printf("\n\n");
}

//값 감소
void decrease(long time){
    for(int i = 0; i<6; i++){
        array[i] -= (level * time); // int값으로 형변환하여 대입

        if(array[i]<0){
            array[i] = 0;
        }
    }
}

// 남아있는 값이 있는지 확인
int check_alive(){
    for (int i = 1; i < 6; i++){
        if(array[i] > 0){
            return 1;
        }
    }
    return 0;
}