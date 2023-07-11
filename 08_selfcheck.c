/*구조체를 이용한 도서관리 프로그램
    - 4권의 책 전체 정보를 출력
    - 사용자로부터 도서 번호를 받아 대출중이면 반납, 대출가능이면 대출로 처리
    - 사용자에게 -1을 입력받을때 까지 반복*/


#include <stdio.h>
struct book {
    int id;
    char *title;
    int available; //0:대출중 , 1:대출가능
};

//함수선언
void print_book(struct book *books_p);


int main(void){
    struct book books[4] ={
        {1,"c입문편",1},
        {2,"파이썬 기본편",1},
        {3,"자바 기본편",1},
        {4,"파이썬 중급편",1}
    };

    int input;


    while(1){
        printf("=======책정보=======\n");
        print_book(books);

        printf("\n대출/반납할 책의 번호를 입력(종료 : -1)\n");
        scanf("%d", &input);

        

        if(input==-1){
            printf("종료\n");
            break;
        }else if(input>=4 || -1>input){
            printf("잘못된 번호입력\n");
            continue;
        }else{
            input--;
            if(books[input].available == 0){
                printf("%s 반납 완료\n", books[input].title);
                books[input].available = 1;
            }else{
                printf("%s 대출 완료\n", books[input].title);
                books[input].available = 0;
            }
        }

    }


    return 0;
}

void print_book(struct book *books_p){ ////////////////////////////포인터로 안받아도 되는지 확인
    for(int i=0; i<4; i++){
        if(books_p[i].available == 1){
            printf("%d - %s : %s\n",books_p[i].id, books_p[i].title, "대출 가능");
        }else{
            printf("%d - %s : %s\n",books_p[i].id, books_p[i].title, "대출 불가능");
        } 
    
    }
}