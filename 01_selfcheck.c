//회원가입 & 가입후 정보 출력

#include <stdio.h>

int main(void){
    char name[256];
    char ID[256];
    int age;
    int birth;
    int size;

    printf("이름?\n");
    scanf("%s", name);
    printf("아이디?\n");
    scanf("%s", ID);
    printf("나이?\n");
    scanf("%d", &age);
    printf("생일?\n");
    scanf("%d", &birth);
    printf("신발크기?\n");
    scanf("%d", &size);

    printf("==========정보==========\n");
    printf("이름 : %s\n", name);
    printf("아이디 : %s\n", ID);
    printf("나이 : %d\n", age);
    printf("생일 : %d\n", birth);
    printf("신발크기 : %d\n", size);


    return 0;

}