#include <stdio.h>
#include <time.h>

//5������ ����̸� �� ����.
//����̴� ��������..

//�����
//�̸� ���� ���� ���̵�(����)


typedef struct {
	char* name;
	int age;
	char* character;
	int level;
} CAT;


//�����Ѱ����
int collection[5] = { 0,0,0,0,0 };

//��ü ����� ����Ʈ
CAT cats[5];

void initCats();//�������� �ʱ�ȭ
void printCat(int selected);
int checkCollection();
int main(void)
{
	srand(time(NULL));

	initCats();

	while (1)
	{
		printf("�αٵα� ���� ����Ǳ�>>enterŰ�� ����Ȯ���ϼ���\n");
		getchar();

		int selected = rand()% 5;//0-4
		printCat(selected);//���̸� ����.
		//����� ó��
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
	cats[0].name = "������";
	cats[0].age = 4;
	cats[0].character = "�¼�";
	cats[0].level = 2;

	cats[1].name = "������";
	cats[1].age = 1;
	cats[1].character = "��ī��";
	cats[1].level = 3;

	cats[2].name = "�ų���";
	cats[2].age = 21;
	cats[2].character = "�������ָ� ������";
	cats[2].level = 5;

	cats[3].name = "�����";
	cats[3].age = 4;
	cats[3].character = "�ò�����";
	cats[3].level = 4;

	cats[4].name = "ġ��";
	cats[4].age = 5;
	cats[4].character = "���ڴ°� ������";
	cats[4].level = 1;
}

void printCat(int selected)
{
	printf("����� �� ������� ���簡 �Ǿ����!===\n\n");
	printf("�̸�:%10s\n",cats[selected].name);
	printf("����:%d\n",cats[selected].age);
	printf("����:%s\n",cats[selected].character);
	//printf("���̵�:%d\n",cats[selected].level);
	printf("���̵�:");
	for (int i=0; i < cats[selected].level; i++)
	{
		printf("%s", "��");
	}
	printf("\n");
}

int checkCollection()
{
	//�������� ���
	int collectionAll = 1;
	//�� ��Ѵ��� Ȯ��
	printf("================\n");
	printf("������ ���� ����Դϴ�");
	for (int i = 0; i < 5; i++)
	{
		if (collection[i] == 0) 
		{
			printf("%10s", "(��ڽ�)");
			collectionAll=0;
		}
		else {
		printf("%10s", cats[i].name);
		}
		printf("\n");
	}
	if (collectionAll == 1) 
	{
		printf("�����մϴ� ��� ���� �����Ϸ�!");
	}
	printf("================\n");
	return collectionAll;
}