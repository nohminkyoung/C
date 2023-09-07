//길이가 5인 int형 배열을 선언해서 사용자로부터 5개의 정수를 입력받은 후 최대,최소값과 총합을 출력

#include<stdio.h>

int main(void){

    int arr[5];

    int min=0, max=0, sum=0;

    printf("5개의 숫자를 입력하세요\n");
    
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    min = arr[0];
    max = arr[0];
    for(int i=0; i<5; i++){
        sum += arr[i];
        if(min>arr[i]){
            min = arr[i];
        }
        if(max<arr[i]){
            max = arr[i];
        }
    }

    printf("최대: %d, 최소:%d, 합계:%d\n", max, min, sum);

    return 0;

}