#include <stdio.h>
#include <time.h>

//�Լ�����
int getRandomNumber(int level);
void showQuestion(int level, int num1, int num2);
void success();
void fail();


int main(void)
{
	//���� 5���� �ְ� �� ������ ���� ����� ���� ��� ����(����)
	//��ġ�� ��� Ʋ���� ����
	
	srand(time(NULL));
	int count = 0;
	for (int i = 1; i <= 5; i++) 
	{
		//x+y=?
		int num1 = getRandomNumber(i);
		int num2 = getRandomNumber(i);
		//printf(%dx%d?",num1,num2);
		showQuestion(i, num1, num2);

		int answer = -1;
		scanf_s("%d", &answer);
		if (answer == -1) 
		{
			printf("���α׷��� �����մϴ�\n");
			//break;
			exit(0); //for�����ᰡ �ƴ� ���α׷� ���� (for�� ������ ���嵵 �����ʴ´�)
		}
		else if (answer == num1 * num2)
		{
			//����
			success();
			count++;
		}
		else 
		{
			//����
			fail();
		}
	}
	printf("����� 5���� ��й�ȣ �� %d���� ������ϴ�\n", count);
	
	return 0;
}

int getRandomNumber(int level)
{
	return rand() % (level * 7) + 1;//������ �������� ���������� ũ�Ⱑ Ŀ��.
}

void showQuestion(int level, int num1, int num2)
{
	printf("\n\n\n######### %d��° ��й�ȣ ##########\n", level);
	printf("\n\t%d x %d ��?\n\n", num1, num2);
	printf("#############################################\n");
	printf("��й�ȣ�� �Է��ϼ���(���� -1)>>>>\n");

}

void success() 
{
	printf("�����Դϴ�\n\n\n");
}
void fail()
{
	printf("Ʋ�Ƚ��ϴ�\n\n\n");
}
