#include <stdio.h>
#include <time.h> 

int main_condition(void)
{
	//버스를 탄다고 가정 학생/일반인으로 구분(일반인 "20세")
	//if(조건){}else{}
	//int age = 15;
	//if (age >= 20)
	//{
	//	printf("일반인입니다");
	//}
	//else {
	//	printf("학생입니다");
	//}
	
	//초등학생(8~13)/ 중학생(14~16)/고등학생(17~19)
	//if else if else
	/*int age = 8;
	if (age >= 8 && age <= 13) 
	{
		printf("초등학생입니다.\n");
	}
	else if (age >= 14 && age <= 16)
	{
		printf("중학생입니다\n");
	}
	else if (age >= 17 && age <= 19)
	{
		printf("고등학생입니다\n");
	}
	else 
	{
		printf("학생이 아닌가봐요\n");
	}*/


	//break, continue
	//1q번부터 30번까지 있는 반에서 1번에서 5번까지 조별발표

	//for (int i = 1; i <= 30; i++) 
	//{
	//	if (i >= 6) {
	//		printf("나머지 학생은 집에가세오\n");
	//		break; //for문 탈출.
	//	}
	//	printf("%d번 학생은 조별발표를 하세오\n", i);
	//}


	//1번부터 30번까지 있는 반에서 7번학생은 아파서 결석
	//7번제외 6~10번학생 조별발표

	//for (int i = 1; i <= 30; i++)
	//{
	//	if (i >= 6 && i <= 10) {
	//		if (i == 7) {
	//			printf("%d번 학생은 결석입니다\n", i);
	//			continue;//건너뛰기
	//		}

	//		printf("%d번 학생은 조별발표를 하세오\n", i);
	//	}
	//}

	// && ||
	/*int a = 10;
	int b = 10;
	int c = 12;
	int d = 13;

	if (a == b || c == d) {
		printf("a와 b 혹은 c와 d의 값이 같습니다.\n");
	}
	else {
		printf("값이 서로 다르네요\n");
	}*/


	//가위 0 바위 1 보 2
	//srand(time(NULL)); //컴퓨터가 랜덤한 수를 선언하게하는 srand
	//int i = rand() % 3;//0-2 반환
	/*if (i == 0)
	{
		printf("가위\n");
	}
	else if(i == 1)
	{
		printf("바위\n");
	}
	else if (i == 2)
	{
		printf("보\n");
	}
	else {
		printf("몰라요\n");
	
	}*/

	/*switch (값)
	{
	case 0:
	{
		printf("가위\n");
		break;
	}
	case 1:
	{
		printf("바위\n");
		break;
	}
	case 2: 
	{
		printf("보\n");
		break;
	}
	default:printf("몰라요\n"); break;
	}*/
	//범위가 안됨....아래처럼 해야한다.

	
	/*int age = 25;

	switch (age)
	{
	case 8:
	case 9:
	case 10:
	case 11:
	case 12:
	case 13:
		printf("초등학생입니다\n"); break;
	case 14:
	case 15:
	case 16:
		printf("중학생입니다\n"); break;
	case 17:
	case 18:
	case 19:
		printf("고등학생입니다\n"); break;
	default:
		printf("학생이 아닌가봐요\n"); break;
	}*/


	//up and down
	srand(time(NULL));
	int num = rand() % 100 + 1// 1~100까지의 숫자
	printf("숫자: %d\n", num);
	int answer = 0;//정답
	int chance = 5;//기회
	while (1) //chance > 0   그냥 1일땐 참이면 계속돌게(무한루프)
	{
		printf("남은 기회: %d\n", chance);
		printf("숫자를 맞혀보세오(1-100)");
		scanf_s("%d", &answer);

		if (answer > num)
		{
			printf("Down\n\n");
			chance--;
		}
		else if (answer < num)
		{
			printf("Up\n\n");
			chance--;

		}
		else if {answer==num}
		{
			printf("정답입니다\n\n");
			break;
		}
		else 
		{
			printf("알수없는 오류가 발생했어요\n\n");
		}
		if (chance == 0) {
			printf("모든 기회를 소진했습니다. 아쉽게 실패했습니다.")
				break;
		}
	}


	return 0;
}
