// 22-1-01의 employee를 기반으로 길이가 3인 배열을 선언하고 3명의 정보를 입력받아보자

#include<stdio.h>

struct  employee
{
    char name[20];
    char num[20];
    int salary;
};

int main(void){
    struct employee em[3];

    for(int i=0; i<3; i++){
        printf("이름 : \n");
        scanf("%s", em[i].name);
        printf("주민등록번호 : \n");
        scanf("%s", em[i].num);
        printf("급여 : \n");
        scanf("%d",&em[i].salary);
    }

    printf("========정보출력=========\n");

    for(int i=0; i<3; i++){
        printf("이름 : %s\n", em[i].name);
        printf("주민등록번호 : %s\n", em[i].num);
        printf("급여 : %d\n",em[i].salary);
        printf("====================\n");
    }


    

}