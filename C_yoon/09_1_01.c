//세 개의 정수를 인자로 전달받아서 그 중 가장 큰 수를 반환하는 함수와 가장 작은 수를 반환하는 함수를 정의해보자

#include <stdio.h>

void Min(int a, int b, int c);
void Max(int a, int b, int c);

int main(void){
    int a, b, c;
    
    printf("세개의 정수를 입력하세요");
    scanf("%d %d %d", &a, &b, &c);

    Min(a,b,c);
    Max(a,b,c);

    return 0;
}

void Max(int a, int b, int c){
    int x;

    if (a>b){
        x = a;
    }else{
        x = b;
    }

    if (x>c){
        x = x;
    }else{
        x = c;
    }

    printf("가장 큰 수는 %d 입니다.\n",x);
}

void Min(int a, int b, int c){
    int x;

    if (a<b){
        x = a;
    }else{
        x = b;
    }

    if (x<c){
        x = x;
    }else{
        x = c;
    }

    printf("가장 작은 수는 %d 입니다.\n",x);
}