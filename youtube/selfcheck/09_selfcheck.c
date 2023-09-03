/*영어단어공부 퀴즈 프로그램
txt파일에 있는 단어의 한글뜻을 가져와 영어를 맞추기 */

#include<stdio.h>
#include<string.h>

int main(void){
    char word[256]= ""; //단어
    char definition[256] =""; //뜻 
    char input[256] =""; //사용자 입력

    FILE *file = fopen("./09_selfcheck.txt", "rb");
    if (file == NULL){
        printf("파일열기실패");
        return 1;
    }

    for (int i=0; i<3; i++){
        fscanf(file, "%s %s", word, definition);

        printf("'%s'라는 뜻을 가진 단어는?\n",definition);
        scanf("%s", input);

        if(strcmp(word, input) == 0){
            printf("정답\n\n");
        }else{
            printf("오답, 정답은 %s\n\n",word);
        }

    }
    fclose(file);

    return 0;
}