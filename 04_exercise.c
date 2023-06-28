#include <stdio.h>

float add(float a, float b){
    return (a+b);
}

float sub(float a, float b){
    return (a-b);
}

float mult(float a, float b){
    return (a * b);
}

float divi(float a, float b){
    return (a/b);
}


int main(void){
    int kind = 0;
    float a,b ;
    printf("작업선택");
    printf("덧셈 : 1, 뺄셈 : 2, 곱셈 : 3, 나눗셈 : 4\n");
    scanf("%d", &kind);

    if(kind == 1){
        scanf("%f %f", &a, &b);
        printf("%.2f\n", add(a,b));
    }else if(kind == 2){
        scanf("%f %f", &a, &b);
        printf("%.2f\n", sub(a,b));
    }else if(kind == 3){
        scanf("%f %f", &a, &b);
        printf("%.2f\n", mult(a,b));
    }else if(kind == 4){
        scanf("%f %f", &a, &b);
        printf("%.2f\n", divi(a,b));
    }else{
        printf("xx\n");
    }
}