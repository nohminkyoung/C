#include <stdio.h>

int main(void){

    //배열생성 : 여러개의 변수를 함께 동시에 생성
    //자료형 이름[개수] : 개수만큼의 자료형을 보관하는 배열을 생성
    int subway_array[3];
    subway_array[0] = 30;
    subway_array[1] = 20;
    subway_array[2] = 10;

    for(int i = 0; i<3 ; i++){
        printf("지하철 %d호차에 %d명\n", i+1, subway_array[i]);
    }

    //값 설정방법
    // 자료형 array = {값, 값,,,}
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};

    for(int i = 0; i<10; i++){
        printf("%d\n",arr[i]);
    }

    //array 선언만 하고 초기화를 안하면 쓰레기값이 들어감
    int arr_x[10];

    for(int i = 0; i<10; i++){
        printf("%d\n",arr_x[i]);
    } // 값은 반드시 초기화가 필요

    // 배열의 크기는 직접 상수로 입력해야함
    /*
    int size = 10;
    int arr[size];*/

    //일부만 초기화 : 초기화 되지 않은값은 0
    int arr2[10] = {1,2};

    for(int i = 0; i<10; i++){
        printf("%d\n",arr2[i]);
    }

    // 배열크기 미선언 : 크기를 미설정해도 초기화된 값과 같은 크기로 생성
    int arr3[] = {1,2};

    //문자 : 한글자 / 문자열 : 여러글자 
    char c = 'a';
    printf("%c\n",c);

    char str[6] = "coding"; //[c][o][d][i][n][g]
    printf("%s\n", str); //뒤에 이상한 값이 나타남
    
    //-> 문자열 끝에는 끝을 의미하는 NULL문자"\0"의값이 들어가야함
    char str2[7] = "coding"; //[c][o][d][i][n][g][\0]
    printf("%s\n", str2);

    char str3[] = "coding";
    printf("%s\n", str3);
    printf("%d\n", sizeof(str3));

    //한글자씩 출력
    for(int i = 0; i<sizeof(str3); i++){
        printf("%c\n",str3[i]);
    }

    //한글 
    char kor[] = "노민경";
    printf("%s\n",kor);
    printf("%d\n",sizeof(kor)); 
    // 영어 1글자 : 1byte, 한글 2글자 : 2byte
    // char : 1byte


    //char c_array[7]={'c','o','d','i','n','g','\0'}; = char str[7] = "coding";
    char c_array[6]={'c','o','d','i','n','g'};
    printf("%s\n",c_array); // 쓰레기값 출력

    //넉넉하게 array
    char c_array2[10] =  {'c','o','d','i','n','g'};
    printf("%s\n",c_array2); // 잘 출력됨
    // 남는 공간에는 \0이 자동으로 들어감 
    for(int i = 0; i<sizeof(c_array2); i++){
        printf("%c\n",c_array2[i]);
    }


    //ASCII 코드 : 7bit, 128개(2의7승)
    printf("%c\n",'a'); // ' ' 안에 문자 넣기 
    printf("%d\n",'a');
    
    printf("%c\n",'\0');
    printf("%d\n",'\0');

    for(int i = 0; i<128; i++){
        printf("아스키코드 %d : %c\n",i,i);
    }

    return 0;

}