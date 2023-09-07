//13_1_01처럼 ptr의 값을 변경해 배열에 접근하지 않고, ptr을 대상으로 덧셈연산을 하여 배열의 요소를 2씩 증가시켜보자

#include<stdio.h>

int main(void){

    int arr[5] = {1,2,3,4,5};
    int * ptr = arr;

    for (int i=0;i<5;i++){
        *(ptr+i) += 2;
    }

    for(int i=0; i<5; i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}