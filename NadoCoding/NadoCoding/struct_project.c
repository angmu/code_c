#include <stdio.h>
#include <time.h>

//5마리의 고양이를 다 수집.
//고양이는 랜덤으루..

//고양이
//이름 나이 성격 난이도(레벨)


typedef struct {
	char* name;
	int age;
	char* character;
	int level;
} CAT;


//보유한고양이
int collection[5] = { 0,0,0,0,0 };

//전체 고양이 리스트
CAT cats[5];

void initCats();//냥이정보 초기화
void printCat(int selected);
int checkCollection();
int main(void)
{
	srand(time(NULL));

	initCats();

	while (1)
	{
		printf("두근두근 냥이 집사되기>>enter키를 눌러확인하세오\n");
		getchar();

		int selected = rand()% 5;//0-4
		printCat(selected);//냥이를 뽑음.
		//고양이 처리
		collection[selected] = 1;
		int collectAll= checkCollection();
		if (collectAll == 1) {
			exit(0);
		}
	}


	return 0;
}
void initCats() 
{
	cats[0].name = "깜냥이";
	cats[0].age = 4;
	cats[0].character = "온순";
	cats[0].level = 2;

	cats[1].name = "점박이";
	cats[1].age = 1;
	cats[1].character = "날카롭";
	cats[1].level = 3;

	cats[2].name = "돼냥이";
	cats[2].age = 21;
	cats[2].character = "먹을걸주면 좋아함";
	cats[2].level = 5;

	cats[3].name = "까꿍이";
	cats[3].age = 4;
	cats[3].character = "시끄러움";
	cats[3].level = 4;

	cats[4].name = "치즈";
	cats[4].age = 5;
	cats[4].character = "잠자는걸 좋아함";
	cats[4].level = 1;
}

void printCat(int selected)
{
	printf("당신은 이 고양이의 집사가 되었어요!===\n\n");
	printf("이름:%10s\n",cats[selected].name);
	printf("나이:%d\n",cats[selected].age);
	printf("성격:%s\n",cats[selected].character);
	//printf("난이도:%d\n",cats[selected].level);
	printf("난이도:");
	for (int i=0; i < cats[selected].level; i++)
	{
		printf("%s", "★");
	}
	printf("\n");
}

int checkCollection()
{
	//보유냥이 출력
	int collectionAll = 1;
	//다 모앗는지 확인
	printf("================\n");
	printf("보유한 냥이 목록입니다");
	for (int i = 0; i < 5; i++)
	{
		if (collection[i] == 0) 
		{
			printf("%10s", "(빈박스)");
			collectionAll=0;
		}
		else {
		printf("%10s", cats[i].name);
		}
		printf("\n");
	}
	if (collectionAll == 1) 
	{
		printf("축하합니다 모든 냥이 수집완료!");
	}
	printf("================\n");
	return collectionAll;
}