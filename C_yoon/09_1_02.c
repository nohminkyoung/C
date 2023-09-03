// 섭씨->화씨 함수와 화씨->섭씨 함수를 만들어보자

#include <stdio.h>

void CelToFah(double a);
void FahToCel(double a);

int main(void){
    double temp;
    int choice;

    while(1){
        printf("1.섭씨->화씨 2.화씨->섭씨");
        scanf("%d", &choice);
        
        if(choice == 1){
            printf("온도를 입력하세요");
            scanf("%lf",&temp);
            CelToFah(temp);
            break;
        }else if(choice==2){
            printf("온도를 입력하세요");
            scanf("%lf",&temp);
            FahToCel(temp);
            break;
        }else{
            printf("올바른 값을 입력하세요\n");
            continue;       
        }
    }
    
    return 0;
    
    
}

void CelToFah(double a){
    printf("섭씨온도%.1f는 화씨온도로 %.1f입니다.\n",a,1.8*a+32);
}

void FahToCel(double a){
    printf("화씨온도 %.1f는 섭씨온도로 %.1f입니다.\n",a,(a-32)/1.8);
}