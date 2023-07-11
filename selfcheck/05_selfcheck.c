//시험점수의 총점과 평균 구하기 

#include<stdio.h>

int main(void){

    int array[5];
    int total = 0; 
    float ave = 0 ;
    
    printf("5과목의 점수 입력\n");
    scanf("%d %d %d %d %d", &array[0],&array[1],&array[2],&array[3],&array[4]);

    for(int i=0; i<5; i++){
        total += array[i];
    }
    ave = (float)total/5;

    printf("총점 : %d, 평균 : %.5f\n", total, ave);

    return 0;

}