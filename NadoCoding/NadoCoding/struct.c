#include <stdio.h>

//���� ��ġ�� ����
struct GameInfo {
	char* name;
	int year;
	int price;
	char* company;

	struct GameInfo* friendGame;//������ü���Ӥ�
};
typedef struct { //gameInfomation ����
	char* name;
	int year;
	int price;
	char* company;

	struct GameInfo* friendGame;//������ü���Ӥ�
} GAME_INFO;

int main_struct(void) 
{
	//�������
	//�̸�: ��������
	//�߸ų⵵ 2017��
	//���� 50��
	//���ۻ�: ����ȸ��

	char* name = "��������";
	int year = 2017;
	int price = 50;
	char* company = "����ȸ��";
	//�������
	//�̸�: �ʵ�����
	//�߸ų⵵ 2017��
	//���� 100��
	//���ۻ�: �ʵ�ȸ��

	char* name2 = "�ʵ�����";
	int year2 = 2017;
	int price2 = 100;
	char* company2 = "�ʵ�ȸ��";

	//����ü���
	struct GameInfo gameInfo1;
	gameInfo1.company = "�ӹ�ȸ��";
	gameInfo1.name = "�ӹ�����";
	gameInfo1.price = 30;
	gameInfo1.year = 2019;

	//����ü ���
	printf("=====�����������======\n");
	printf("���Ӹ�%s\n",gameInfo1.name);
	printf("�߸ų⵵%d\n", gameInfo1.year);
	printf("����%d\n", gameInfo1.price);
	printf("�߸�ȸ��%s\n", gameInfo1.company);

	//����ü�� �迭ó�� �ʱ�ȭ
	struct GameInfo gameInfo2 = { "�ʵ�����",2917,211,"�ʵ�ȸ��" };
	printf("=====�����������======\n");
	printf("���Ӹ�%s\n", gameInfo2.name);
	printf("�߸ų⵵%d\n", gameInfo2.year);
	printf("����%d\n", gameInfo2.price);
	printf("�߸�ȸ��%s\n", gameInfo2.company);

	//����ü �迭
	struct GameInfo gameArray[2]=
	{
		 { "��������",2917,50,"����ȸ��" },
		  { "�ʵ�����",2917,100,"�ʵ�ȸ��" }
	};

	//����ü ������
	struct GameInfo* gamePtr;//�̼Ǹ�
	gamePtr = &gameInfo1;
	printf("=====�����������======\n");
	/*printf("���Ӹ�%s\n", (*gamePtr).name);
	printf("�߸ų⵵%d\n", (*gamePtr).year);
	printf("����%d\n", (*gamePtr).price);
	printf("�߸�ȸ��%s\n", (*gamePtr).company);*/
	printf("���Ӹ�%s\n", gamePtr ->name);
	printf("�߸ų⵵%d\n", gamePtr ->year);
	printf("����%d\n", gamePtr ->price);
	printf("�߸�ȸ��%s\n", gamePtr->company);


	//������ü ���ӼҰ�
	gameInfo1.friendGame = &gameInfo2;
	printf("=====���������������======\n");
	printf("���Ӹ�%s\n", gameInfo1.friendGame->name);
	printf("�߸ų⵵%d\n", gameInfo1.friendGame->year);
	printf("����%d\n", gameInfo1.friendGame->price);
	printf("�߸�ȸ��%s\n", gameInfo1.friendGame->company);

	//struct ���̱�
	//typedef
	//�ڷ����� ��������.
	int i = 1;
	typedef int ����;
	typedef float �Ǽ�;
	���� �������� = 3; //int i=3;
	�Ǽ� �Ǽ����� = 2.2122f;//float f=2.2122f

	typedef struct GameInfo ��������;
	�������� game1;
	game1.name = "�ѱ� ����";
	game1.year =1222;

	GAME_INFO game2;
	game2.name="ȫ�浿����";
	/*struct gameInfomation game4;
	game4.name = "ȫ�浿����"; //��� ����ü���� �̸��� ������ ���Ұ�/
	*/
	return 0;
}

