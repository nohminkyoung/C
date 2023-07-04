#include <stdio.h>

int main(void){

    int i; // o
    int arr[5]; // ooooo
    
    int arr2[2][5];
    //ooooo  => [0,0][0,1][0,2][0,3][0,4]
    //ooooo  => [1,0][1,1][1,2][1,3][1,4]

    int arr3[4][2];
    //oo
    //oo
    //oo
    //oo

    int arr4[3][3][3];
    //ooo
    //ooo
    //ooo

    //ooo
    //ooo
    //ooo

    //ooo
    //ooo
    //ooo

    // 다차원 배열 선언
    int arr_2[2][5]={{1,2,3,4,5},{6,7,8,9,10}};

    int arr_3[3][3][3] = {{{1,2,3},{4,5,6},{7,8,9}},
                            {{11,12,13},{14,15,16},{17,18,19}},
                            {{21,22,23},{24,25,26},{27,28,29}}};


    //다차원 배열값 출력
    for (int i=0; i<2; i++){
        for(int j=0; j<5; j++){
            printf("2차원 배열 <%d, %d> : %d\n", i,j,arr_2[i][j]);
        }
    }

    for (int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            for(int k=0; k<3; k++){
                printf("3차원 배열 <%d, %d, %d> : %d\n", i,j,k,arr_3[i][j][k]);
            }
            
        }
    }


    return 0;
}