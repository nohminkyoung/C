//사용자에게 문자열을 입력받아 그 중 아스키코드가 가장 큰 문자를 출력해보자

#include<stdio.h>

int main(void){
    char str[30]; 
    char max = 0; //비교를 위해 char

    int len = 0;
    printf("영어단어를 입력\n");
    scanf("%s",str);

    while(str[len]!='\0'){
        len++;
    }

    for(int i=0;i<=len;i++){
        if(max<str[i]){ //그냥 문자 자체를 비교하면 아스키의 값으로 크기비교 
            max=str[i];
        }
    }

    printf("가장 큰 값은 %c",max);

    return 0;
    

}