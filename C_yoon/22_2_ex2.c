// 포인터 변수를 구조체의 멤버로 선언하기 

#include<stdio.h>

struct point
{
    int xpos;
    int ypos;
};

struct circle
{
    double radian;
    struct point * center;
};

int main(void){
    struct point cen = {2,7};

    double rad = 5.5;

    struct circle ring = {rad, &cen};

    printf("원의 반지름 : %g \n", ring.radian);
    printf("원 중심 : [%d, %d]\n",(ring.center)->xpos, (ring.center)->ypos); //ring.center가 구조체의 포인터변수 

    return 0;
}
