// 비밀번호를 입력해서 값이 맞으면 저장된 파일을 보여줌 & 계속 추가할수있도록 

#include <stdio.h>
#include <string.h> //strmcp사용을 위함
// #include <conio.h> //getch()사용을 위함

#define MAX 10000

int main(void){
    char password[20]; //입력받은 비번
    int i = 0; //password의 인덱스 용
    char line[MAX]; // 파일에서 읽어온 내용을 담음
    char input[MAX]; //입력받은 내용을 담음
    char c; // 입력받은 비번 글자를 마스킹하기 위함

    printf("비밀번호를 입력하세요\n");
    scanf("%s", password);
    
    //비밀번호를 1글자씩 받으며 *로 변경해서 나타냄(enter눌렀을 경우 입력받기 종료) ***** window에서만 지원
    // whlie(1){
    //     //getchar() 와 getch() 차이
    //     //getchar() : 엔터를 입력해야 동작을 함
    //     //getch() : 키 입력시 바로바로 동작 함 

    //     c = getch();
    //     if(c == 13){ //13은 enter키 
    //         password[i] = '\0'; //enter를 눌렀을 때 문자열 마지막자리
    //         break;
    //     }else{
    //         password[i] = c;
    //         printf("*");
    //     }
    //     i++;
    // }
    // printf("\n");

    //비밀번호 일치여부 확인
    
    //일치 시 
    if(strcmp(password, "exercise09") == 0){ // 문자열 비교 : strcmp(문자1, 문자2) => 같다면 0
        printf("비밀번호 확인 완료\n");

        FILE *file = fopen("exercise_09.txt", "a+b"); // fopen 의 a+b : 파일이 없으면 생성, 있으면 append

        FILE *rfile = fopen("exercise_09.txt", "rb");
        //파일 내용 보여줌
        while(fgets(line,MAX,rfile) != NULL){
            printf("%s", line);
        }

        printf("\n 추가할 내용 입력, 종료하려면 EXIT입력\n");

        //내용 추가 
        while(1){

            
            scanf("%[^\n]",input); // scanf("%[^\n]",x) : 줄바꿈(\n)이 나타나기 전까지의 문자열을 모두 x에 저장
            getchar(); //enter를 입력해 입력되지 않고 남아있는 \n를 무시하고 넘어감

            if(strcmp(input, "EXIT") == 0){
                printf("종료\n");
                break;
            }
            fputs(input, file); //파일에 내용 저장
            fputs("\n", file);
        }
        fclose(rfile);
        fclose(file);

    }else{ //미일치시 
        printf("비밀번호 미일치\n");
    }


    return 0;
}






