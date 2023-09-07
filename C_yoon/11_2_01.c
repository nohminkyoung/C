//사용자에게 문자열을 입력받고 그 문자열의 길이를 출력해보자

#include<stdio.h>

int main(void){
    char str[100];

    int x = 0;

    printf("단어를 입력\n");
    scanf("%s",str);

    while(str[x]!=0){
        x++;
    }
    printf("문자열의 길이는 %d\n",x);

    return 0;
       
}