//배열의 요소들을 포인터를 이용해서 바꾸기 
// 함수 : 받은 주소의 값이 홀수면 그대로, 짝수면 제곱을 값으로 변경

#include<stdio.h>

//함수선언
void squara(int *pointer);

int main(void){

    int arr[10] = {1,2,3,4,5,6,7,8,9,10};

    for(int i = 0; i<10; i++){
        squara(&arr[i]);
    }

    for(int i = 0; i<10; i++){
        printf("%5d", arr[i]);
        if(i<sizeof(arr)/sizeof(arr[0])-1){
            printf(",");
        }
    }
    printf("\n");

    return 0;   
}

void squara(int *pointer){

    if((*pointer%2) == 0){
        *pointer = (*pointer)*(*pointer);
    }

}