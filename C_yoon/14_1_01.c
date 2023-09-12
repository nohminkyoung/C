//변수 num에 저장된 값의 제곱을 계산하는 함수를 정의하고, 이를 호출하는 main함수를 작성해보자.
//call-by-value, call-by-reference 두가지


#include<stdio.h>

int squarebyvalue(int num);
void squarebyreference(int * ptr);

int main(void){

    int num;
    printf("숫자를 하나 입력하세요\n");
    scanf("%d",&num);

    printf("call-by-value : %d\n",squarebyvalue(num));
    printf("num : %d\n", num);
    squarebyreference(&num);
    printf("call-by-reference 후 num: %d\n",num);


}

int squarebyvalue(int num){
    return num*num;
}

void squarebyreference(int * ptr){
    int num = *ptr;
    *ptr = num*num;
}