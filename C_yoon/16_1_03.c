//성적관리프로그램, 4명의 사람과 4개의 과목점수를 입력받고 미리 선언해놓은 배열에 입력한다
//저장이 끝나면 개인별 총점, 과목별 총점을 각 끝 열과 끝 행에 위치시킨다
//마지막에 검증을 위한 출력

#include<stdio.h>

int arr[5][5];

//학생 성적입력
void input_value(void){
    int sum;
    
    for (int i=0;i<4;i++){
        sum = 0;
        printf("%d번째 학생 성적\n",i+1);
        for(int j=0;j<4;j++){
            printf("%d번째 과목\n",j+1);
            scanf("%d", &arr[i][j]);
            sum+=arr[i][j];    
        }
        arr[i][4] = sum;
    }
}

void subsum(void){
    int sum = 0;

    for(int i=0;i<4;i++){
        sum = 0;
        for(int j=0;j<4;j++){
            sum += arr[j][i];
        }
        arr[4][i] = sum;
    }
}

int main(void){
    input_value();
    subsum();

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

}