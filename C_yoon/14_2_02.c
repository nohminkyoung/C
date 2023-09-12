//아래 코드의 잘못된 부분을 찾아보자

#include<stdio.h>

void showdata(const int * ptr){

    int * rptr = ptr;
    printf("%d\n", *rptr);
    *rptr = 20;
}

int main(void){
    int num = 10;
    int * ptr = &num;
    showdata(ptr);

    return 0;
}


// showdata 함수에서 매개변수 ptr값을 const로 선언했기 때문에 ptr이 가리키고 있는 변수의 값을 변환하지 않겠다는 뜻
// 하지만 ptr과 같은 값을 갖는 rptr을 통해 ptr이 가리키는 변수의 값을 변경하고자 했기때문에 오류가 발생