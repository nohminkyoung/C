//사용자에게 문자열을 입력받아 반대로 출력하는 프로그램을 만들어보자

#include<stdio.h>

int main(void){
    char str[100];
    char str2[100];

    int j = 0;

    printf("문자열을 입력\n");
    scanf("%s",str);

    int len = 0;
    while(str[len]!=0){
        len++;
    }

    for(int i=len-1;i>=0;i--){
        str2[j] = str[i];
        j++;
    
    }
    str2[len+1] = '\0';

    printf("반대로는%s",str2);
}