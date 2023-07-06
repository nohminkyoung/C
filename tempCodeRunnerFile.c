(1){
        //getchar() 와 getch() 차이
        //getchar() : 엔터를 입력해야 동작을 함
        //getch() : 키 입력시 바로바로 동작 함 

        c = getch();
        if(c == 13){ //13은 enter키 
            password[i] = '\0'; //enter를 눌렀을 때 문자열 마지막자리
            break;
        }else{
            password[i] = c;
            printf("*");
        }
        i++;
    }
    printf("\n");
