#include <stdio.h>
#include <time.h>


//물고기 6마리 어항에 사는데 사막에 어항이 있음
//사막이 너무 더워서 물이 증발함
//물고기는 점점 커지고 나중에는 냠냠
int level;
int arrayFish[6];
int* cursor;
void decreaseWater(long elapsedTime);

void initData();
void printFishes();
int checkFishAlive();

int main_pointer_project(void)
{
	long startTime = 0;//게임시작시간
	long totalElapsedTime = 0;//총 경과시간
	long prevElapsedTime = 0;//직전경과시간(최근 물을 줄 시간간격)

	int num;//몇번 물을 줄것인가(사용자입력)
	initData();
    
	cursor = arrayFish;//cursor[0]

	startTime = clock();//현재시간을 밀리세컨으로 저장.

	while (1)
	{
		printFishes();
		printf("몇 번 어항에 물을 주시겠어요?\n");
		scanf_s("%d", &num);

		//입력값체크
		if (num < 1 || num>6)
		{
			printf("입력값이 잘못되었습니다\n");
			continue;
		}

		//흐른시간 체크
		totalElapsedTime = (clock() - startTime) / CLOCKS_PER_SEC;//밀리세컨드 > 초단위로 바꿈
		printf("총 경과시간 : %ld초\n", totalElapsedTime);


		//직전 물을 준 시간 체크--물높이를 낮출 물의 양 계산 목적
		prevElapsedTime = totalElapsedTime - prevElapsedTime;
		printf("최근경과시간: %ld초\n", prevElapsedTime);

		//어항의 물 감소
		decreaseWater(prevElapsedTime);

		//사용자가 입력한 어항에 물을 준다.
		//어항의 물이 0이면 물을 주지않는다. 이미 고기 죽음
		if (cursor[num - 1] <= 0)
		{
			printf("%d번의 물고기는 이미 죽었습니다.\n",num);
		}
		//어항의 물이 100이 넘는지 체크
		else if (cursor[num - 1] <= 100)
		{
			//물을준다	
			printf("%d번의 물고기에게 물을 줍니다.\n",num);
			cursor[num - 1] += 1;
		}

		//레벨업을 할건지 확인(20초마다 수행)
		if (totalElapsedTime / 20 > level - 1)
		{
			level++;
			printf("+++축 레벨업 %d에서 %d가 되었습니다\n", level - 1, level);
		}
		if (level == 5)
		{
			printf("\n\n축하합니다 최고 레벨을 달성했습니다.게임을 종료합니다.\n");
			exit(0);
		}

		//물고기가 모두 죽었는지 확인.
		if (checkFishAlive() == 0)
		{
			printf("\n\n모든물고기가 죽었습니다.게임을 종료합니다.\n");
			exit(0);
		}
		else {
			printf("\n\n물고기가 아직 살아있어요\n");
		}
		prevElapsedTime = totalElapsedTime;

		//10초->15초(5초: pre쪽에 15초로 바꿔버림..

	}

	return 0;
}

void initData()
{
	level = 1;//게임레벨 1-5
	for (int i = 0; i < 6; i++)
	{
		arrayFish[i] = 100;//어항의 물 높이는 0~100사이
	}
}

void printFishes()
{
	printf("%3d번 %3d번 %3d번 %3d번 %3d번 %3d번\n ", 1, 2, 3, 4, 5, 6);
	for (int i = 0; i < 6; i++)
	{
		printf("%3d  ", arrayFish[i]);

	}
	printf("\n\n");
}

void decreaseWater(long elapsedTime)
{
	for (int i = 0; i < 6; i++)
	{
		arrayFish[i] -= (level * 3 * (int)elapsedTime);//난이도 조절 3
		if (arrayFish[i] < 0)
		{
			arrayFish[i] = 0;
		}
	}
}

int checkFishAlive()
{
	for (int i = 0; i < 6; i++)
	{
		if (arrayFish[i] > 0)
		{
			return 1;
		}
	}
	return 0;
}