#include <stdio.h>
#include <time.h>
//10마리 서로다른 동물 
//사용자로부터 2개의 입력값을 받아서 같은동물 찾으면 카드 뒤집기.
//모든 동물 찾으면 게임종료
//실패횟수 알려주기

int arrayAnimal[4][5];//카드 지도 20장 카드표시
int checkAnimal[4][5];//뒤집여부 확인
char *strAnimal[10];

void initAnimalArray();
void initAnimalName();
void shuffleAnimal();
int getEmptyPosition();
int conv_pos_x(int x);
int conv_pos_y(int y);

void printAnimals();
void printQuestion();
int foundAllAnimals();

int main_m_array_project(void)
{
	srand(time(NULL));
	initAnimalArray();
	initAnimalName();

	int failCount = 0;//실패횟수

	while (1)
	{
		int select1 = 0;
		int select2 = 0;

		printAnimals();
		printQuestion();
		printf("뒤집을 카드를 2개 고르세오\n");
		scanf_s("%d %d", &select1, &select2);

		if (select1 == select2)
		{
			continue;
		}

		//좌표 카드를 만들고 같은지 확인
		int firstSelect_x = conv_pos_x(select1);
		int firstSelect_y = conv_pos_y(select1);

		int secondSelect_x = conv_pos_x(select2);
		int secondSelect_y = conv_pos_y(select2);

		//카드 뒤집여부 확인+동물이 같은지 확인
		if (checkAnimal[firstSelect_x][firstSelect_y]==0&&
			checkAnimal[secondSelect_x][secondSelect_y]==0
			&&arrayAnimal[firstSelect_x][firstSelect_y]==arrayAnimal[secondSelect_x][secondSelect_y]
			) {
			printf("\n\n정답!! %s발견\n\n", strAnimal[arrayAnimal[firstSelect_x][firstSelect_y]]);
			checkAnimal[firstSelect_x][firstSelect_y] = 1;
			checkAnimal[secondSelect_x][secondSelect_y] = 1;
		}
		else {
			printf("\n\n땡 틀렷거나 이미 맞힌카드입니다.\n\n");
			printf("%d: %s\n",select1, strAnimal[arrayAnimal[firstSelect_x][firstSelect_y]]);
			printf("%d: %s\n", select2, strAnimal[arrayAnimal[secondSelect_x][secondSelect_y]]);

			failCount++;
		}

		//모든 동물을 찾았는지 여부
		if (foundAllAnimals() == 1)
		{
			printf("\n\n축하합니다 모든 카드를 맞췄습니다.\n\n");
			printf("\n\n지금까지 총 %d번 실패하였습니다\n\n",failCount);
			exit(0);
		}

	}

	return 0;
}

void initAnimalArray()
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			arrayAnimal[i][j] = -1;
		}
	}
}

void initAnimalName()
{
	strAnimal[0] = "원숭이";
	strAnimal[1] = "하마";
	strAnimal[2] = "강아지";
	strAnimal[3] = "고양이";
	strAnimal[4] = "돼지";
	strAnimal[5] = "코끼리";
	strAnimal[6] = "기린";
	strAnimal[7] = "낙타";
	strAnimal[8] = "타조";
	strAnimal[9] = "호랑이";

	shuffleAnimal();
}

void shuffleAnimal()
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			int pos = getEmptyPosition();
			int x = conv_pos_x(pos);
			int y = conv_pos_y(pos);

			arrayAnimal[x][y] = i;
		}
	}
}
//좌표에서 빈공간 찾기
int getEmptyPosition()
{
	//ㅁㅁㅁㅁㅁ  0   1   2   3   4 ->0
	//ㅁㅁㅁㅁㅁ  5   6   7   8   9 ->1
	//ㅁㅁㅁㅁㅁ 10  11  12  13  14 ->2
	//ㅁㅁㅁㅁㅁ 15  16  17  18  19 ->3
	while (1)
	{
		int randPos = rand() % 20;//0~19사이의 숫자반환
		//19-->{3,4}
		int x = conv_pos_x(randPos);
		int y = conv_pos_y(randPos);

		if (arrayAnimal[x][y] == -1)
		{
			return randPos;
		}
	}

}

int conv_pos_x(int x)
{
	return x / 5;//몫
}

int conv_pos_y(int y)
{
	return y % 5;//나머지 반환
}

void printAnimals()
{//동물위치
	for (int i= 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%8s", strAnimal[arrayAnimal[i][j]]);
		}
		printf("\n");
	}
	printf("\n\n");
}

void printQuestion()
{//문제출력
	printf("\n\n문제\n");
	int seq = 0;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			//카드를 뒤집어서 정답을 맞히면 동물이름.
			//못맏히면 숫자(뒷면)
			if (checkAnimal[i][j] != 0)
			{
				printf("%8s", strAnimal[arrayAnimal[i][j]]);
			}
			else {
				printf("%8d", seq);
			}
			seq++;
		}
		printf("\n");
	}
	printf("\n\n");
}

int foundAllAnimals()
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			
			if (checkAnimal[i][j] == 0)
			{
				return 0;
			}
			
		}
		
	}
	return 1;//모두 다 찾음
}