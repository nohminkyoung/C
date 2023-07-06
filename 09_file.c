#include<stdio.h>

#define MAX 10000 // MAX를 10000이라는 상수로 어디에서든 사용가능

int main(void){

    //파일 입출력 

    //fputs, fgets => 문자열을 저장 
    //fputs(파일에 쓰기)
    char line[MAX]; //== char line[10000]

    FILE *file_W = fopen("file1.txt","wb"); //파일열기 (r:읽기전용 w:쓰기전용 a:뒤에 추가 //t:텍스트 b:바이너리)
    if (file_W == NULL){
        printf("파일열기 실패\n");
        return 1;
    }

    //fput("쓸 말 ",넣을 파일을 받고있는 포인터변수)
    fputs("fputs를 이용해서 글을 적기\n",file_W); 
    fputs("두번째 줄 적기\n",file_W); 

    //항상 파일을 닫아줘야 함 
    fclose(file_W);

    ////////////////////////////////////////////////////////////////////////////
    //fgets(파일 읽기)
    FILE *file_R = fopen("file1.txt","rb"); 
    if (file_R == NULL){
        printf("파일열기 실패\n");
        return 1;
    }

    while (fgets(line, MAX, file_R) != NULL){ //fgets(넣을곳, 크기, 읽어올 파일)
        printf("%s", line);
    }
    fclose(file_R);

    ////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////

    //fprintf, fscanf => 정형화된 포멧(%d,%s ..)에 대해서 

    ////////////////////////////////////////////////////////////////////////////
    //fprintf 저장
    int num[6] = {0,0,0,0,0,0}; //추첨번호
    int bonus = 0; //보너스번호
    char str1[MAX];
    char str2[MAX];

    FILE *file_P = fopen("file2.txt","wb");
    if (file_P == NULL){
        printf("파일열기 실패\n");
        return 1;
    }

    //fprintf(파일을 담고있는 포인터 변수 , "%....값")
    fprintf(file_P,"%s %d %d %d %d %d %d\n","추첨번호",1,2,3,4,5,6);
    fprintf(file_P,"%s %d","보너스번호",7);

    fclose(file_P);

    ////////////////////////////////////////////////////////////////////////////
    //fscanf 읽어오기
    FILE *file_S = fopen("file2.txt","rb");
    if (file_S == NULL){
        printf("파일열기 실패\n");
        return 1;
    }

    fscanf(file_S,"%s %d %d %d %d %d %d",str1, &num[0],&num[1],&num[2],&num[3],&num[4],&num[5]);
    printf("%s %d %d %d %d %d %d",str1, num[0],num[1],num[2],num[3],num[4],num[5]);
    fscanf(file_S,"%s %d",str1, &bonus);
    printf("%s %d \n",str1, bonus);
    fclose(file_S);




    return 0;
}