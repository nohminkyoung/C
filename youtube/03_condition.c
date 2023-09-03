#include <time.h> 
#include <stdlib.h> 
#include <stdio.h>
int main(void){

    // if else
    // if(조건){실행}else{실행}

    int age = 15;
    if(age>=20){
        printf("성인\n");
    }else{
        printf("학생\n");
    }
    // if else의 실행문이 1줄일 경우 {}생략 가능
    if(age>=20)
        printf("성인2\n");
    else
        printf("학생2\n");


    //if else if else
    //if(조건){실행} else if(조건){실행} else{실행}
    int age2 = 8;
    if(age2>=8 && age2<=13){
        printf("초딩\n");
    }else if (age2>=14 && age<=16)
    {
        printf("중딩\n");
    }else if (age2>=17 && age2<=19)
    {
        printf("고딩\n");
    }else //else생략가능 
    {
        printf("학생아님");

    }

    //break : brake이후의 코드는 실행하지 않고, 반복문 종료 
    //continue : continue이후의 코드는 실행하지않고, 반복문 다음 i로 이동
    
    //1부터 30중 17이하의 짝수만 출력
    for(int i=1; i<=30; i++){
        if(i==17){
            break;
        }else{
            if(i%2!=0){
                continue;
            }else{
                printf("%d\n",i);
            }
        } 
    }
    // and : && / or : || 


    //switch
    //switch(비교값){
        //case 비교값의 값 : 실행 
    //}
    // case의 조건에는 1가지 만 넣을수있음 (and나 or불가)
    //switch문은 case에 맞는 조건이 걸리면 그 이후의 코드는 모두 실행
    //ex) x가 0이 나와서 첫번째 case에 맞으면 그 뒤 바위, 보, 모름 까지 출력
    //그렇기 때문에break문을 사용해야 한 실행문만 출력됨

    srand(time(NULL));
    int x = rand()%3;
    switch(x){
        case 0 : printf("가위\n"); break;
        case 1 : printf("바위\n"); break;
        case 2 : printf("보\n"); break;
        default : printf("모름\n"); 
    }


    return 0;
}