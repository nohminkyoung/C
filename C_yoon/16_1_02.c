//배열 a를 선언과 동시에 초기화 하고 , 그 값을 이용해 b를 선언하자
//a
//1 2 3 4
//5 6 7 8

//b
//1 5
//2 6
//3 7
//4 8 

#include<stdio.h>

int main(void){
    int arr_a[2][4] = {{1,2,3,4},
                        {5,6,7,8}};
    int arr_b[4][2];

    for(int i=0; i<2;i++){
        for(int j=0;j<4;j++){
            arr_b[j][i] = arr_a[i][j];
        }
    }

    for(int i=0; i<4;i++){
        for(int j=0;j<2;j++){
            printf("%d ", arr_b[i][j]);
        }
        printf("\n");
    }

    return 0;
}