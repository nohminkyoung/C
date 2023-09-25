// 사용자로부터 알 문를 입력받아서, 입력받은 문자가 대문자라면 이를 소문자로, 소문자라면 대문자로 바꿔 출력하는 프로그램을 만들어 보자 
// 알파벳 이외의 값을 입력하면 오류를 반환

#include<stdio.h>
#include<string.h>

int conv(int ch){
    int diff = 'a' - 'A';
    if (ch>='A' && ch <='Z'){
        return ch + diff;
    }
    else if(ch>='a' && ch<='z'){
        return ch - diff;
    }
    else{
        return -1;
    }
}


int main(void){
    int ch;
    printf("알파벳을 입력\n");
    ch = getchar();
    ch = conv(ch);
    if (ch == -1){
        printf("올바른 값이 아님\n");
        return -1;
    }
    putchar(ch);
    return 0;

    
}
