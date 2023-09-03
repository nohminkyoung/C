// 샌드위치+커피가격 계산하기 
// 커피 + 샌드위치 하면 커피 할인 

#include<stdio.h>

int main(void){

    int sand = 0;
    int coffee = 0;

    printf("커피/샌드위치 수량을 입력\n");
    scanf("%d %d", &coffee, &sand);

    if(sand>=1 && coffee>=1){
        printf("총 금액 : %d\n", 3500*coffee+6000*sand);
    }else{
        printf("총 금액 : %d\n", 4500*coffee+6000*sand);
    }

    return 0;
}