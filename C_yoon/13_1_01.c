//길이가 5인 int형 배열을 선언하고 1,2,3,4,5로 초기화한 다음 배열의 첫번쨰 요소를 가리키는 포인터변수 ptr을 선언
//ptr의 값을 증가시키는 형태의 연산으로 배열에 요소에 접근해 2씩 증가시키고, 출력해보자

#include<stdio.h>

int main(void){
    int arr[5] = {1,2,3,4,5};
    int * ptr = arr;

    for(int i=0;i<5;i++){
        *ptr += 2;
        ptr++; //가리키는 배열의 요소를 한칸씩 옮겨줌
    }

    for(int i=0; i<5; i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}