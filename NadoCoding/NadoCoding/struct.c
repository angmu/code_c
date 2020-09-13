#include <stdio.h>

//전역 위치에 선언
struct GameInfo {
	char* name;
	int year;
	int price;
	char* company;

	struct GameInfo* friendGame;//연관업체게임ㄴ
};
typedef struct { //gameInfomation 지움
	char* name;
	int year;
	int price;
	char* company;

	struct GameInfo* friendGame;//연관업체게임ㄴ
} GAME_INFO;

int main_struct(void) 
{
	//게임출시
	//이름: 나도게임
	//발매년도 2017년
	//가격 50원
	//제작사: 나도회사

	char* name = "나도게임";
	int year = 2017;
	int price = 50;
	char* company = "나도회사";
	//게임출시
	//이름: 너도게임
	//발매년도 2017년
	//가격 100원
	//제작사: 너도회사

	char* name2 = "너도게임";
	int year2 = 2017;
	int price2 = 100;
	char* company2 = "너도회사";

	//구조체사용
	struct GameInfo gameInfo1;
	gameInfo1.company = "앙무회사";
	gameInfo1.name = "앙무게임";
	gameInfo1.price = 30;
	gameInfo1.year = 2019;

	//구조체 출력
	printf("=====게임출시정보======\n");
	printf("게임명%s\n",gameInfo1.name);
	printf("발매년도%d\n", gameInfo1.year);
	printf("가격%d\n", gameInfo1.price);
	printf("발매회사%s\n", gameInfo1.company);

	//구조체를 배열처럼 초기화
	struct GameInfo gameInfo2 = { "너도게임",2917,211,"너도회사" };
	printf("=====게임출시정보======\n");
	printf("게임명%s\n", gameInfo2.name);
	printf("발매년도%d\n", gameInfo2.year);
	printf("가격%d\n", gameInfo2.price);
	printf("발매회사%s\n", gameInfo2.company);

	//구조체 배열
	struct GameInfo gameArray[2]=
	{
		 { "나도게임",2917,50,"나도회사" },
		  { "너도게임",2917,100,"너도회사" }
	};

	//구조체 포인터
	struct GameInfo* gamePtr;//미션맨
	gamePtr = &gameInfo1;
	printf("=====게임출시정보======\n");
	/*printf("게임명%s\n", (*gamePtr).name);
	printf("발매년도%d\n", (*gamePtr).year);
	printf("가격%d\n", (*gamePtr).price);
	printf("발매회사%s\n", (*gamePtr).company);*/
	printf("게임명%s\n", gamePtr ->name);
	printf("발매년도%d\n", gamePtr ->year);
	printf("가격%d\n", gamePtr ->price);
	printf("발매회사%s\n", gamePtr->company);


	//연관업체 게임소개
	gameInfo1.friendGame = &gameInfo2;
	printf("=====연관게임출시정보======\n");
	printf("게임명%s\n", gameInfo1.friendGame->name);
	printf("발매년도%d\n", gameInfo1.friendGame->year);
	printf("가격%d\n", gameInfo1.friendGame->price);
	printf("발매회사%s\n", gameInfo1.friendGame->company);

	//struct 줄이기
	//typedef
	//자료형에 별명저장.
	int i = 1;
	typedef int 정수;
	typedef float 실수;
	정수 정수변수 = 3; //int i=3;
	실수 실수변수 = 2.2122f;//float f=2.2122f

	typedef struct GameInfo 게임정보;
	게임정보 game1;
	game1.name = "한글 게임";
	game1.year =1222;

	GAME_INFO game2;
	game2.name="홍길동게임";
	/*struct gameInfomation game4;
	game4.name = "홍길동게임"; //상단 구조체에서 이름을 지워서 사용불가/
	*/
	return 0;
}

