//세 변수에 저장된 값을 서로 뒤바꾸는 함수를 정의해보자.
//함수가 다음과 같은 형태로 호출되어야한다. swap(&num1, &num2, &num3)
//num1에 저장된 값은 num2에, num2에 저장된 값은 num3에 저장되어야한다. 

#include<stdio.h>

void swap(int * a, int * b, int *c);

int main(void){
    int a,b,c;
    printf("세개의 정수를 입력하세요\n");
    scanf("%d %d %d", &a,&b,&c);

    swap(&a, &b, &c);

    printf("%d, %d, %d", a,b,c);
}

void swap(int * a, int * b, int *c){
    int  x;

    x = *a;
    *a = *b;
    *b = *c;
    *c = x;
}