//영화상영시간 000분을 00시간0분으로 표기

#include<stdio.h>

//함수선언
void convert_time(int movie);

int main(void){
    int movie;

    printf("몇분짜리 영화인가?\n");
    scanf("%d", &movie);

    convert_time(movie);

}

void convert_time(int movie){
    printf("상영시간 : %d시간 %d분\n", movie/60, movie%60);
}