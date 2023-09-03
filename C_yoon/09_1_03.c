//사용자의 입력값에 따른 횟수만큼 출력하는 피보나치 수열을 만들어보자

#include <stdio.h>

void Pibo(int num);

int main(void){
    int num;

    printf("몇 회 실행할까요\n");
    scanf("%d",&num);

    Pibo(num);
}

void Pibo(int num){
    int a=0, b = 1, c;

    if (num==1){
        printf("%d",a);
    }else if(num==2){
        printf("%d %d",a,b);
    }else{
        printf("%d %d ",a,b);
        for(int i=0;i<num-2;i++){
            c = a+b;
            printf("%d ",c);
            a = b;
            b = c;
        }
    }
    printf("\n");
    
}