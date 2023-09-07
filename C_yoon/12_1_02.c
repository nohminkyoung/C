//num1을 10, num2를 20으로 초기화하고 포인터 변수 ptr1,2를 선언해 각각 변수를 가리키게 한 후 num1은 10을 num2는 20을 증가시켜라
//최종적으로 num1과 num2가 담고있는 값을 변경한 후 출력해보자

#include<stdio.h>

int main(void){
    int num1 = 10, num2 = 20;

    int * ptr1 = &num1;
    int * ptr2 = &num2;

    int * temp = NULL; //빈값을 초기화 할때에는 NULL활용

    (*ptr1)+=10;
    (*ptr2)+=20;

    temp = ptr1;
    ptr1 = ptr2;
    ptr2 = temp;

    printf("num1 = %d\n", *ptr1); //각각의 포인터 변수가 가리키는 주소값이 변경된것이지, num이 담고있는 값이 바뀐것이 아니기 때문에 *ptr을 출력해야함
    printf("num2 = %d\n",*ptr2);

    return 0;

}