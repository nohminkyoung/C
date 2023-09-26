//문자열 형태의 이름과 문자열 형태의 주민등록번호, 정수형태의 급여정보를 저장할 수 있는  employee 구조체 변수를 하나 선언한 다음 사용자에게 데이터를 입력받아서 정보를 채우자

#include<stdio.h>

struct  employee
{
    char name[20];
    char num[20];
    int salary;
};

int main(void){
    struct employee em;

    printf("이름 : \n");
    scanf("%s", em.name);
    printf("주민등록번호 : \n");
    scanf("%s", em.num);
    printf("급여 : \n");
    scanf("%d",&em.salary);

    printf("======정보출력=======\n");
    printf("이름 : %s\n", em.name);
    printf("주민등록번호 : %s\n", em.num);
    printf("급여 : %d\n",em.salary);

    return 0;
    
}
