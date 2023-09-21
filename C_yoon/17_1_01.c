//두개의 int형 포인터 변수와, 길이가 5인 int형 배열을 선언한다.
// minmax라는 함수를 정의하고, 위의 배열과 두 포인터 변수에 대한 정보를 전달하자
//함수가 실행되면 minptr에는 최소값의 주소가, maxptr에는 최대값의 주소가 저장되어야한다

#include<stdio.h>

void minmax(int * arr, int size, int ** maxptr, int ** minptr){
    int * max;
    int * min;

    max = arr;
    min = arr;

    for(int i=0; i<size;i++){
        if(*max < arr[i]){
            max = &arr[i];
        }
        if(*min>arr[i]){
            min = &arr[i];
        }
    }
    
    *maxptr = max;
    *minptr = min;
}

int main(void){

    int * maxptr, * minptr;
    int arr[5];

    for(int i=0; i<5; i++){
        printf("%d번째 정수입력\n", i+1);
        scanf("%d",&arr[i]);
    }

    minmax(arr, 5, &maxptr, &minptr);
    printf("최대 : %d, 최소 : %d\n", *maxptr, *minptr);

    return 0;
}