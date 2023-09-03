
#include <stdio.h>

int main(void){

    // 정수형 변수 예제
    //변수 선언 : 변수형 변수명 = 값;
    int age = 12;
    printf("%d\n", age); //%d : 정수형 값을 받아옴(age)

    age = 13; //변수 값 변경
    printf("%d\n", age);


    // 실수형 변수 예제 
    float w = 46.5f; //46.5뒤의 소수점까지 나타내기 위해서 f
    printf("%.3f\n",w); // %.3f : 소수점 3자리까지 실수를 받아옴

    double d = 4.428;
    printf("%lf\n",d); //double 형은 lf


    //상수에대한 예제
    //상수 선언 : const + 변수선언
    const int YEAR = 2000;
    printf("태어난 년도 : %d\n", YEAR);

    //YEAR = 2001; // 상수의 값은 변경이 불가능함
    
    //printf
    //연산 
    int add = 3+7;
    printf("3+7 = %d\n", add); // 변수 사용 연산
    printf("%d + %d = %d",3,7,3+7); // 변수 미사용 연산

    //scanf : 키보드 입력을 받아서 저장
    int input1, input2, input3;
    printf("값을 입력하세요");
    scanf("%d %d %d", &input1, &input2, &input3); //scanf는 문자열을 입력받을때 길이도 입력받아야함 
    printf("1번째 : %d",input1);
    printf("2번째 : %d",input2);
    printf("3번째 : %d",input3);

    // 문자 : 한 글자. 문자열 : 한 글자 이상의 여러 글자 
    char c = 'A';
    printf("%c\n",c); //%c : 문자를 받아옴

    char str[256]; //str[256]문자열 : 문자한개를 [256]개 나열하는 배열 생성
    scanf("%s", str); //문자열 받을때에는 %s, &가 필요없고, 사이즈를 지정해줘야함 

    return 0;
}