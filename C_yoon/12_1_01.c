//예제 실행 후 변수와 포인터변수의 관계를 그림으로 그려보자

#include<stdio.h>

int main(void){
    int num = 10;
    int * ptr1 = &num;
    int * ptr2 = ptr1;

    (*ptr1)++;
    (*ptr2)++;

    printf("%d \n",num);

    return 0;
}

// ptr2 -> ptr1 -> num의 주소값
// *ptr1 은 10을 나타냄, ++ 하면 11, *ptr2는 증가된 11