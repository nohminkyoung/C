//가로 길이가 9, 세의 길이가 3인 int형 2차원 배열을 선언하여 구구단 중 2,3,4,단을 저장해보자

#include<stdio.h>

int main (void){
    int arr[3][9];

    for(int i=0; i<3; i++){
        for(int j=0; j<9; j++){
            arr[i][j] = (i+2)*(j+1);
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<9;j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
