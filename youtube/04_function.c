#include<stdio.h>

/***********************************************
//사용 예 
//선언 : p라는 함수를 쓰겠다고 선언(가장위에서 선언해줌)
void p(int num);

int main(void){
    int num = 2;
    // printf("num은 %d입니다", num);
    p(num);

    //2+3 
    num = num+3;
    //printf("num은 %d입니다", num);
    p(num);

    //5-1
    num -= 1;
    //printf("num은 %d입니다", num);
    p(num);

    //4*3
    num *= 3;
    //printf("num은 %d입니다", num);
    p(num);


    return 0;
}

//정의
void p(int num){

    printf("num은 %d입니다", num);
}
***********************************************/

//함수 
// 반환형 함수이름(전달값){실행값}


//함수 선언
void function_without_return();
int function_with_return();
void function_without_param();
void function_with_param(int a, int b, int c);
int function_with_all(int total, int x);

// 1. 반환값이 없는 함수
void function_without_return(){
    printf("반환값이 없는 함수\n\n");
}

//2. 반환값이 있는 함수
int function_with_return(){
    printf("반환값이 있는 함수\n");
    return 10;
}

//3. 파라미터(전달값)이없는 함수 
void function_without_param(){
    printf("전달값이 없는 함수\n\n");
    }

//4. 파라미터(전달값)이 있는 함수
void function_with_param(int a, int b, int c){
    printf("전달값이 있는 함수 : %d, %d, %d\n\n", a,b,c);

}

//5. 파라미터 + 반환값이 있는 함수
int function_with_all(int total, int x){

    printf("반환값이 있는 함수\n");
    return (total - x);

}

int main(void){

    printf("1.\n");
    function_without_return();

    printf("2.\n");
    int ret = function_with_return();
    printf("%d\n\n",ret);

    printf("3.\n");
    function_without_param();


    printf("4.\n");
    function_with_param(100,99,5000);
    

    printf("5.\n");
    int an = function_with_all(5,2);
    printf("5-2=%d\n", an);
    printf("%d - %d = %d\n\n", 10,4,function_with_all(10,4));



    return 0;
}
