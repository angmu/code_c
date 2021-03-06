#include <stdio.h>
#include <time.h>
//10原軒 辞稽陥献 疑弘 
//紫遂切稽採斗 2鯵税 脊径葵聖 閤焼辞 旭精疑弘 達生檎 朝球 及増奄.
//乞窮 疑弘 達生檎 惟績曽戟
//叔鳶判呪 硝形爽奄

int arrayAnimal[4][5];//朝球 走亀 20舌 朝球妊獣
int checkAnimal[4][5];//及増食採 溌昔
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

	int failCount = 0;//叔鳶判呪

	while (1)
	{
		int select1 = 0;
		int select2 = 0;

		printAnimals();
		printQuestion();
		printf("及増聖 朝球研 2鯵 壱牽室神\n");
		scanf_s("%d %d", &select1, &select2);

		if (select1 == select2)
		{
			continue;
		}

		//疎妊 朝球研 幻級壱 旭精走 溌昔
		int firstSelect_x = conv_pos_x(select1);
		int firstSelect_y = conv_pos_y(select1);

		int secondSelect_x = conv_pos_x(select2);
		int secondSelect_y = conv_pos_y(select2);

		//朝球 及増食採 溌昔+疑弘戚 旭精走 溌昔
		if (checkAnimal[firstSelect_x][firstSelect_y]==0&&
			checkAnimal[secondSelect_x][secondSelect_y]==0
			&&arrayAnimal[firstSelect_x][firstSelect_y]==arrayAnimal[secondSelect_x][secondSelect_y]
			) {
			printf("\n\n舛岩!! %s降胃\n\n", strAnimal[arrayAnimal[firstSelect_x][firstSelect_y]]);
			checkAnimal[firstSelect_x][firstSelect_y] = 1;
			checkAnimal[secondSelect_x][secondSelect_y] = 1;
		}
		else {
			printf("\n\n強 堂掲暗蟹 戚耕 限微朝球脊艦陥.\n\n");
			printf("%d: %s\n",select1, strAnimal[arrayAnimal[firstSelect_x][firstSelect_y]]);
			printf("%d: %s\n", select2, strAnimal[arrayAnimal[secondSelect_x][secondSelect_y]]);

			failCount++;
		}

		//乞窮 疑弘聖 達紹澗走 食採
		if (foundAllAnimals() == 1)
		{
			printf("\n\n逐馬杯艦陥 乞窮 朝球研 限宙柔艦陥.\n\n");
			printf("\n\n走榎猿走 恥 %d腰 叔鳶馬心柔艦陥\n\n",failCount);
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
	strAnimal[0] = "据周戚";
	strAnimal[1] = "馬原";
	strAnimal[2] = "悪焼走";
	strAnimal[3] = "壱丞戚";
	strAnimal[4] = "掬走";
	strAnimal[5] = "坪晦軒";
	strAnimal[6] = "奄鍵";
	strAnimal[7] = "開展";
	strAnimal[8] = "展繕";
	strAnimal[9] = "硲櫛戚";

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
//疎妊拭辞 朔因娃 達奄
int getEmptyPosition()
{
	//けけけけけ  0   1   2   3   4 ->0
	//けけけけけ  5   6   7   8   9 ->1
	//けけけけけ 10  11  12  13  14 ->2
	//けけけけけ 15  16  17  18  19 ->3
	while (1)
	{
		int randPos = rand() % 20;//0~19紫戚税 収切鋼発
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
	return x / 5;//交
}

int conv_pos_y(int y)
{
	return y % 5;//蟹袴走 鋼発
}

void printAnimals()
{//疑弘是帖
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
{//庚薦窒径
	printf("\n\n庚薦\n");
	int seq = 0;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			//朝球研 及増嬢辞 舛岩聖 限備檎 疑弘戚硯.
			//公減備檎 収切(急檎)
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
	return 1;//乞砧 陥 達製
}