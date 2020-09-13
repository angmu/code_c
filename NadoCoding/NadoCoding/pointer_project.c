#include <stdio.h>
#include <time.h>


//����� 6���� ���׿� ��µ� �縷�� ������ ����
//�縷�� �ʹ� ������ ���� ������
//������ ���� Ŀ���� ���߿��� �ȳ�
int level;
int arrayFish[6];
int* cursor;
void decreaseWater(long elapsedTime);

void initData();
void printFishes();
int checkFishAlive();

int main_pointer_project(void)
{
	long startTime = 0;//���ӽ��۽ð�
	long totalElapsedTime = 0;//�� ����ð�
	long prevElapsedTime = 0;//��������ð�(�ֱ� ���� �� �ð�����)

	int num;//��� ���� �ٰ��ΰ�(������Է�)
	initData();
    
	cursor = arrayFish;//cursor[0]

	startTime = clock();//����ð��� �и��������� ����.

	while (1)
	{
		printFishes();
		printf("�� �� ���׿� ���� �ֽðھ��?\n");
		scanf_s("%d", &num);

		//�Է°�üũ
		if (num < 1 || num>6)
		{
			printf("�Է°��� �߸��Ǿ����ϴ�\n");
			continue;
		}

		//�帥�ð� üũ
		totalElapsedTime = (clock() - startTime) / CLOCKS_PER_SEC;//�и������� > �ʴ����� �ٲ�
		printf("�� ����ð� : %ld��\n", totalElapsedTime);


		//���� ���� �� �ð� üũ--�����̸� ���� ���� �� ��� ����
		prevElapsedTime = totalElapsedTime - prevElapsedTime;
		printf("�ֱٰ���ð�: %ld��\n", prevElapsedTime);

		//������ �� ����
		decreaseWater(prevElapsedTime);

		//����ڰ� �Է��� ���׿� ���� �ش�.
		//������ ���� 0�̸� ���� �����ʴ´�. �̹� ��� ����
		if (cursor[num - 1] <= 0)
		{
			printf("%d���� ������ �̹� �׾����ϴ�.\n",num);
		}
		//������ ���� 100�� �Ѵ��� üũ
		else if (cursor[num - 1] <= 100)
		{
			//�����ش�	
			printf("%d���� ����⿡�� ���� �ݴϴ�.\n",num);
			cursor[num - 1] += 1;
		}

		//�������� �Ұ��� Ȯ��(20�ʸ��� ����)
		if (totalElapsedTime / 20 > level - 1)
		{
			level++;
			printf("+++�� ������ %d���� %d�� �Ǿ����ϴ�\n", level - 1, level);
		}
		if (level == 5)
		{
			printf("\n\n�����մϴ� �ְ� ������ �޼��߽��ϴ�.������ �����մϴ�.\n");
			exit(0);
		}

		//����Ⱑ ��� �׾����� Ȯ��.
		if (checkFishAlive() == 0)
		{
			printf("\n\n��繰��Ⱑ �׾����ϴ�.������ �����մϴ�.\n");
			exit(0);
		}
		else {
			printf("\n\n����Ⱑ ���� ����־��\n");
		}
		prevElapsedTime = totalElapsedTime;

		//10��->15��(5��: pre�ʿ� 15�ʷ� �ٲ����..

	}

	return 0;
}

void initData()
{
	level = 1;//���ӷ��� 1-5
	for (int i = 0; i < 6; i++)
	{
		arrayFish[i] = 100;//������ �� ���̴� 0~100����
	}
}

void printFishes()
{
	printf("%3d�� %3d�� %3d�� %3d�� %3d�� %3d��\n ", 1, 2, 3, 4, 5, 6);
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
		arrayFish[i] -= (level * 3 * (int)elapsedTime);//���̵� ���� 3
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