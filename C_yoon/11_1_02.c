//char형 배열을 선언과 동시에 "Good Time"으로 초기화 하고 출력하는 예제를 만들어보자 

#include<stdio.h>

int main(void){
    char text[] = {'G','o','o','d',' ','T','i','m','e'};
    int x = sizeof(text)/sizeof(char);
    
    for(int i=0;i<x;i++){
        printf("%c",text[i]);
    }
    printf("\n");
    return 0;
}