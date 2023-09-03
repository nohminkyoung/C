#include <stdio.h>
void swap();
void swap_addr();
void changeArr();

int main(void){

    //포인터 예제 
    // a : 101호, b : 201호, c : 301호 (메모리 공간의 주소)

    int a = 1; // 값
    int b = 2;
    int c = 3;

    // 주소값을 구할떄에는 &를 사용
    printf("a 의 주소 : %d, a의 값 : %d\n", &a, a);
    printf("b 의 주소 : %d, b의 값 : %d\n", &b, b);
    printf("c 의 주소 : %d, c의 값 : %d\n", &c, c);

    //포인터 변수 : 주소값(메모리주소)를 저장하는 변수, *를 앞에 써줘야함
    //포인터 변수가 저장하고있는 주소의 '값'은 포인터변수 앞에 *를 붙여줌 
    int *pointer;
    pointer = &a;
    printf("주소 : %d, 값 : %d\n", pointer, *pointer);

    pointer = &b;
    printf("주소 : %d, 값 : %d\n", pointer, *pointer);

    //포인터 변수를 이용해 값 변경
    pointer = &a;
    *pointer = *pointer * 10;
    printf("바뀐값 : %d\n", *pointer);

    // 주소의 주인 a의 값도 변경됨 확인
    printf("%d\n",a);

    //pointer2
    int *pointer2 = pointer;
    pointer2 = &a;
    *pointer2 = *pointer2 - 2;
    printf("pointer2 : %d\n", pointer2);
    printf("pointer : %d\n", pointer);
    printf("a : %d", a);

    // 포인터 변수의 주소 
    printf("%d\n", &pointer);


    // 배열 포인터
    int arr[3] = {5, 10, 15};
    int *ptr = arr;
    
    for(int i = 0; i<3; i++){
        printf("배열 arr[%d]의 값 : %d\n", i, arr[i]);
    }

    for(int i = 0; i<3; i++){
        printf("포인터 ptr[%d]의 값 : %d\n", i, ptr[i]);
    }

    ptr[0] = 100;
    ptr[1] = 200;
    ptr[2] = 300;
    for(int i = 0; i<3; i++){
        // printf("배열 arr[%d]의 값 : %d\n", i, arr[i]);
        printf("배열 arr[%d]의 값 : %d\n", i, *(arr + i)); // 위의 주석과 같은 값 출력(arr은 arr의 첫번째 값의 주소를 나타냄, +i하면 i번째 주소를 나타내고 *를 붙이면 값을 나타내기때문)
    }

    for(int i = 0; i<3; i++){
        //printf("포인터 ptr[%d]의 값 : %d\n", i, ptr[i]);
        printf("포인터 ptr[%d]의 값 : %d\n", i, *(ptr +i));
    }
    // arr[i] == *(arr + i)
    // arr == arr 배열의 첫번째 값의 주소 (== &arr[0])

    // arr[0] = *&arr[0]




    //Swap
    // x 와 y값 변경
    int x = 10;
    int y = 20;
    
    printf("Swap 전 => x : %d, y : %d\n",x,y);
    printf("Swap 전 => x의 주소 : %d, y의 주소 : %d\n", &x, &y);
    swap(x, y);
    printf("Swap 후 => x : %d, y : %d\n",x,y);
    printf("Swap 후 => x의 주소 : %d, y의 주소 : %d\n", &x, &y);
    // swap중에는 값이 변경이 되지만, main에서 사용시에는 변경되지 않음
    //값에 의한 복사 : 값만 복사한다는 의미


    //주소값을 이용한 swap
    printf("(주소값 전달)Swap 전 => x : %d, y : %d\n",x,y);
    swap_addr(&x, &y);
    printf("(주소값 전달)Swap 후 => x : %d, y : %d\n",x,y);



    // 포인터로 배열 값 변경
    int arr2[3] = {10,20,30};
    changeArr(arr2); // -> 30을 50으로 변경 (arr2는 arr2의 주소값을 나타냄)
    //changeArr(&arr2[0]); 위와 같음
    for (int i = 0; i < 3; i++){
        printf("%d", arr2[i]);
    }

    
    return 0;
}


void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
    printf("Swap 중 => x : %d, y : %d\n",a,b);
    printf("Swap 중 => x의 주소 : %d, y의 주소 : %d\n", &a, &b); // 새로운 주소값에 값이 저장되서 변경이 안됨
}


void swap_addr(int * a, int * b){
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("(주소값 전달)Swap 중 => x : %d, y : %d\n",*a,*b);
}

void changeArr(int *pointer){ //주소값을 넘겨받음으로 매개변수는 포인터 변수 
    pointer[2] = 50;
}