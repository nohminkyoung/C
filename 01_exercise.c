#include <stdio.h>

int main(void){

    // 개인정보 입력
    char name[256];
    printf("이름?");
    scanf("%s",name);

    int age;
    printf("나이?");
    scanf("%d", &age);

    float weight;
    printf("몸무게?");
    scanf("%f", &weight);

    double height;
    printf("키?");
    scanf("%lf", &height);

    char what[256];
    printf("소개?");
    scanf("%s", what);


    printf("\n\n -- 정보 -- \n\n");
    printf("이름 : %s\n",name);
    printf("나이 : %d\n",age);
    printf("몸무게 : %.2f\n",weight);
    printf("키 : %.2lf\n", height);
    printf("소개 : %s\n", what);

    return 0;
}