#include <stdio.h>

int main(void){

    // for(선언;조건;증감)
    for(int i =1; i<=10; i++){ 

        printf("for %d\n",i);
    } 

    //while(조건)
    int i = 1;
    while(i<=10){
        printf("while %d\n",i++); // 다음문장에서 i++을 안하고 여기서 해도 i에 ++이 적용됨
        //i++;
    }

    //do{} while(조건);
    i = 1;
    do{
        printf("do while %d\n",i++);
 
    } while(i<=10);
    
    // 구구단(2중반복)
    for(int i=1;i<=9;i++){
        printf("------%d단------\n",i);
        for(int j=1;j<=9;j++){
            printf("%d * %d = %d \n",i,j,i*j);
        }
        printf("\n");
    }

    return 0;
}