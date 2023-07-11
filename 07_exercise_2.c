// 같은카드 뽑기 게임
#include<stdio.h>
#include<time.h>
#include <stdlib.h>

int array_card[4][5]; //4*5의 배열
int check_array[4][5];
char * strcard[10]; //카드에 적힌 글자 

//함수 선언
void init_array();
void initsrt();
void shuffle();
int getempty();
int conv_pos_x(int pos);
int conv_pos_y(int pos);
void printanswer();
void printcard();
int foundall();


int main(void){

    srand(time(NULL));

    init_array(); //배열 초기화
    initsrt(); //카드에 들어갈 이름

    shuffle(); // 카드 섞기 

    int failcount = 0; // 총 실패횟수

    while(1){
        int select1 = 0;
        int select2 = 0;

        //printanswer(); //정답출력
        printcard(); // 현재상황 출력

        printf("확인할 카드 2개의 숫자 입력\n");
        scanf("%d %d", &select1, &select2);
        select1--;
        select2--;

        if (select1 == select2){ //같은 카드일 경우 다시
            printf("다른카드 고르기\n");
            continue;
        }

        int select1_x = conv_pos_x(select1);
        int select1_y = conv_pos_y(select1);
        int select2_x = conv_pos_x(select2);
        int select2_y = conv_pos_y(select2);

        if (check_array[select1_x][select1_y]==0 && check_array[select2_x][select2_y]==0){

            if(array_card[select1_x][select1_y] == array_card[select2_x][select2_y]){
                printf("정답\n\n");
                check_array[select1_x][select1_y] = 1;
                check_array[select2_x][select2_y] = 1;
            }else{
                printf("다른카드선택\n");
                printf("%d :  %s\n", select1, strcard[array_card[select1_x][select1_y]]);
                printf("%d :  %s\n", select2, strcard[array_card[select2_x][select2_y]]);
                failcount++;

            }
        }else{
            printf("숫자로 나타난 카드 중 선택\n");
        }

        int finish = foundall();

        if (finish == 1){
            printf("모두 찾기 성공\n");
            printf("실패횟수 : %d\n", failcount);
            break;
        }

    }
    return 0;
}




//////////////////////////////////////////
// 배열 값 초기화 함수 
void init_array(){

    for(int i=0; i<4; i++){
        for(int j=0; j<5; j++){
            array_card[i][j] = -1;
            check_array[i][j] = 0;
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
            
            int pos = getempty();
            int x = conv_pos_x(pos);
            int y = conv_pos_y(pos);

            array_card[x][y] = i;
        
        }

    }

}

// 채워지지 않은 위치 찾기
int getempty(){
    while (1){
        int randpos = rand() % 20; //20개의 자리 
        int x = conv_pos_x(randpos);
        int y = conv_pos_y(randpos);

        if (array_card[x][y]==-1){
            return randpos;
        }
    }

    return 0;
}
// getempty함수를 활용해서 바로 좌표값을 뽑아내려면 구조체를 활용하면 됨
// 구조체 getempty(){
//     구조체 좌표이름
//     좌표.x = x;
//     좌표.y = y;
//     return 좌표이름;
// }


// 카드 위치의 좌표를 찾아내기
int conv_pos_x(int pos){

    return pos/5; 
}
int conv_pos_y(int pos){
    return pos%5; 
}

//정답을 보여주기 
void printanswer(){
    printf("정답들\n\n");

    for (int i=0; i<4; i++){
        for (int j=0; j<5; j++){
            printf("%3s", strcard[array_card[i][j]]);
        }
        printf("\n");
    }

    printf("\n\n");
}

//현재의 현황을 보여주기 
void printcard(){

    int num = 0;

    for(int i=0; i<4; i++){
        for (int j=0; j<5; j++){
            
            if(check_array[i][j]==1){
                printf("%3s", strcard[array_card[i][j]]);
            }else{
                printf("%3d", (i*5)+j+1);
            }
        }
        printf("\n");
    }

    printf("\n\n");
}


//다 찾았는지 여부 
int foundall(){
    for (int i=0; i<4; i++){
        for (int j=0; j<5; j++){
            if(check_array[i][j] == 0){
                return 0;
            }
        }
    }
    return 1;
}
