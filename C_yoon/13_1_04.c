//길이가 6인 int형 배열 arr를 1,2,3,4,5,6으로 초기화 한 후 6,5,4,3,2,1이 되도록 변경해보자
// 배열의 앞 뒤를 가리키는 변수 두개를 선언해서 이를 활용하여 저장된 값의 순서를 뒤바꿔야한다

#include<stdio.h>

int main(void){

    int arr[6]={1,2,3,4,5,6};
    int * ptr1 = &arr[0];
    int * ptr2 = &arr[6];

    int temp;

    for(int i=0; i<3; i++){
        temp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = temp;

        ptr1++;
        ptr2--;
    }

    for(int i=0;i<6;i++){
        printf("%d",arr[i]);
    }

    return 0;
}