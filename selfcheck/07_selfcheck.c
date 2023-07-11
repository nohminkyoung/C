/*무인자판기 
    - 총 12개의 상품(세로 3, 가로 4)
    1. 전체목록 출력하기 
    2. 사용자로부터 상품번호 입력받기 -> 유효하다면 상품정보 출력, 잘못된 번호라면 잘못됨을 출력 */


#include<stdio.h>

char *arr[3][4];

//함수선언
void init_arr();
void printarr();

int main(void){

    int choice;

    init_arr();
    printarr();

    printf("========어떤걸 고를건가요========\n");
    scanf("%d", &choice);

    if (choice>=1 && choice<=12){
        printf("%s\n", arr[(choice-1)/4][(choice-1)%4]);
    }else{
        printf("잘못된 값\n");
        //exit(0); /////////////////////////////////////필요있는건가???
    }
    
    return 0;
}

// 초기화 함수
void init_arr(){
    arr[0][0] = "1.우유  ";
    arr[0][1] = "2.커피  ";
    arr[0][2] = "3.주스  ";
    arr[0][3] = "4.탄산  ";
    arr[1][0] = "5.칸칩  ";
    arr[1][1] = "6.거북칩 ";
    arr[1][2] = "7.감자칩 ";
    arr[1][3] = "8.고구마칩";
    arr[2][0] = "9.안타볼 ";
    arr[2][1] = "10.초코버섯";
    arr[2][2] = "11.가재깡 ";
    arr[2][3] = "12.씨리얼 ";
}

// 자판기 보여주는 함수
void printarr(){

    for(int i=0 ; i<3; i++){
        for(int j=0; j<4; j++){
            printf("%13s", arr[i][j]);
        }
        printf("\n");
    }
}

