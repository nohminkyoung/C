//랜덤으로 나오는 5가지의 종류의 카드를 모두 모아야 끝나는 게임

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int collection[5] = {0,0,0,0,0}; //한번도 나오지않으면 0, 한번이라도 나타난다면 1

typedef struct {
    char *name;
    int age;
    int level;
}CARD;

CARD card[5];


//함수선언 
void initcard();
void printcard(int select);
int check_collection();

int main(void){

    srand(time(NULL));

    initcard();

    while(1){

        printf("아무 키나 눌러서 나올카드 확인\n");
        getchar();

        printf("=============================\n");
        int select = rand() % 5; //0~4까지 랜덤
        printcard(select);

        int check = check_collection();

        if(check==1){
            printf("다모았다!\n\n");
            break;
        }

    }

    return 0;
}


//5장의 카드의 정보를 초기화 
void initcard(){
    card[0].name = "a";
    card[0].age = 11;
    card[0].level = 1;

    card[1].name = "b";
    card[1].age = 12;
    card[1].level = 3;

    card[2].name = "c";
    card[2].age = 13;
    card[2].level = 5;

    card[3].name = "d";
    card[3].age = 14;
    card[3].level =2;

    card[4].name = "e";
    card[4].age = 15;
    card[4].level = 4;

}


//뽑은 카드의 정보를 출력 
void printcard(int select){

    printf("이름 : %s\n",card[select].name);
    printf("나이 : %d\n",card[select].age);
    printf("레벨 : ");
    for(int i =0; i<card[select].level; i++){
        printf("*");
    }
    printf("\n\n");

    collection[select] = 1;

}


//다 모았는지 확인하는 함수
int check_collection(){
    int collectall = 1;

    for(int i = 0; i<5; i++){
        
        if(collection[i]==0){
            printf("%10s","못뽑음"); //공백을 줘서 가독성 높이기 위해 %5s
            collectall = 0;
        }else{
            printf("%3s ",card[i].name);
        }
    }
    printf("\n");
    printf("=============================\n");
    printf("\n\n");

    return collectall;
}