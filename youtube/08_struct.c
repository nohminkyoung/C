#include <stdio.h>

//구조체 선언
//struct 구조체 이름{
//  int 변수
//  char 변수 
//};

struct Info {
    char * name;
    int year;
    char * nickname;
};

struct Info2 {
    char * name;
    int year;
    char * nickname;

    struct Info *friend;
};


typedef struct Info3 {
    char * name;
    int year;
    char * nickname;
}typedef_Info;

typedef struct {
    char * name;
    int year;
    char * nickname;
}NONAME;

int main(void){

    //Ex
    // 이름 : 
    // 나이 : 
    // 닉네임 :
    char * name = "a";
    int year = 10;
    char * nickname = "A";

    char * name2 = "b";
    int year2 = 20;
    char * nickname2 = "B";
    //이것들을 한번에 간단히 선언하기 위해 구조체 사용

    // 구조체 사용
    //struct 구조체 이름 사용할 이름
    struct Info C_Info;
    // 사용할 이름.구조체 내 변수 = "넣을 값"
    C_Info.name = "c";
    C_Info.year = 30;
    C_Info.nickname = "C";


    //구조체 출력
    //사용할 이름.변수
    printf("-- c정보 출력 --\n");
	printf("이름 : %s\n", C_Info.name);
	printf("나이 : %d\n", C_Info.year);
	printf("닉네임 : %s\n", C_Info.nickname);


    //구조체를 배열처럼 초기화 
    //struct 구조체이름 사용할 이름 = {순서대로 값을 입력}
    struct Info D_Info = {"d", 40, "D"};
    printf("-- d정보 출력 --\n");
	printf("이름 : %s\n", D_Info.name);
	printf("나이 : %d\n", D_Info.year);
	printf("닉네임 : %s\n", D_Info.nickname);


    //구조체배열
    // struct 구조체 이름 사용할이름[배열수] = {{값},{값},,,}
    struct Info Infoarray[2]={{"e", 50, "E"}, {"f", 60, "F"}};
    printf("-- array정보 출력 --\n");
	printf("이름 : %s\n", Infoarray[1].name);
	printf("나이 : %d\n", Infoarray[1].year);
	printf("닉네임 : %s\n", Infoarray[1].nickname);


    //구조체 포인터 
    struct Info pointer_Info = {"g", 70, "G"};

    struct Info *pointer;
    pointer = &pointer_Info;
    //(*포인터변수).구조체 내 변수 == 포인터변수 -> 구조체 내 변수
    printf("-- pointer변수를 활용한 정보 출력 --\n");
	printf("이름 : %s\n", pointer -> name); //== printf("이름 : %s\n", (*pointer).name);
	printf("나이 : %d\n", pointer -> year);
	printf("닉네임 : %s\n", pointer -> nickname);



    //구조체 안의 구조체(Info2)
    struct Info2 total_Info;
    total_Info.name = "total";
    total_Info.year = 10;
    total_Info.nickname = "TOTAL";

    struct Info struct_in_struct;
    struct_in_struct.name = "friend";
    struct_in_struct.year = 10;
    struct_in_struct.nickname = "FRIEND";

    // Info2의 내부 friend의 포인터 변수에 내부에 들어갈 struct의 주소를 연결
    total_Info.friend = &struct_in_struct;
    printf("-- 내부의 친구 정보 출력 --\n");
	printf("이름 : %s\n", total_Info.friend -> name); //friend는 포인터변수이므로 -> 사용
	printf("나이 : %d\n", total_Info.friend -> year);
	printf("닉네임 : %s\n", total_Info.friend -> nickname);


    //typedef : 자료형의 별명 지정
    int i = 1;
    typedef int 정수; //int를 정수 라는 이름으로 

    정수 정수변수 = 3; // == int 정수변수 = 3;

    typedef struct Info 정보; // struct Info 전체를 정보 라는 글자로 사용
    정보 x;
    x.name = "이름";

    //구조체 선언 시 typedef 사용법(Info3)
    //typedef struct 구조체의 원래이름{
    //} 치환해서 사용할 이름;   ==> "struct 구조체의 원래이름"을 "치환해서 사용할 이름"으로 사용
    typedef_Info y;
    y.name = "typedef 이름";

    //"원래이름" 이 없어도 "치환해서사용할이름"만으로도 사용가능함(마지막 구조체)
    NONAME z;
    z.name = "이름없는 구조체 이름";

    return 0;

}