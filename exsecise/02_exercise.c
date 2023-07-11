#include <stdio.h>

int main(void){
     //피라미드쌓기
    int count; 
    printf("몇단");
    scanf("%d",&count);

    for(int i=0; i<=count; i++){
        for(int s=count-i; s>0; s--){
            printf(" ");
        }
        for(int j=1;j<=2*i-1;j++){
                printf("*");
            }
        printf("\n");
        
    }

    return 0;
}