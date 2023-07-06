// 같은카드 뽑기 게임
#include<stdio.h>
#include<time.h>
#include <stdlib.h>

int array_card[4][5]; //4*5의 배열
char * strcard[10]; //카드에 적힌 글자 

//함수 선언
void init_array();
void initsrt();

int main(void){

    srand(time(NULL));

    init_array();
    initsrt();

    return 0;
}


// 배열 값 초기화 함수 
void init_array(){

    for(int i=0; i<4; i++){
        for(int j=0; j<5; j++){
            array_card[i][j] = -1;
        }
    }
}

//카드의 이름을 정하는 함수 
void initsrt(){
    strcard[0] = "a";
    strcard[1] = "b";
    strcard[2] = "c";
    strcard[3] = "d";
    strcard[4] = "e";
    strcard[5] = "f";
    strcard[6] = "g";
    strcard[7] = "h";
    strcard[8] = "i";
    strcard[9] = "j";
}

//10개의 단어를 카드에 랜덤으로 입력
void shuffle(){

    for(int i=0; i<10; i++){ //10종류의 단어

        for(int j=0; j<2; j++){ //두장씩

        }

    }

}