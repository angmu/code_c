#include <stdio.h>

int main_array_project(void)
{
	////�迭
	//int subway_1 = 30;//����ö 1ȣ���� 30���� Ÿ���ִ�.
	//int subway_2 = 40;
	//int subway_3 = 50;

	//printf("����ö 1ȣ���� %d���� Ÿ�� �ֽ��ϴ�", subway_1);
	//printf("����ö 1ȣ���� %d���� Ÿ�� �ֽ��ϴ�", subway_2);
	//printf("����ö 1ȣ���� %d���� Ÿ�� �ֽ��ϴ�", subway_3);

	//���� ���� ������ �Բ� ���ÿ� ����
	//int subway_array[3]; //0,1,2

	//subway_array[0] = 30;
	//subway_array[1] = 40;
	//subway_array[2] = 50;

	//for (int i = 0; i < 3; i++)
	//{
	//	printf("����ö %dȣ���� %d���� Ÿ�� �ֽ��ϴ�", i + 1, subway_array[i]);

	//}

	//�� ���� ���-
	/*int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}*/

	//�ʱ�ȭ�� �ݵ�� �ؾ���.
	/*int arr[10];
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}*/



	//�迭 ũ��� �׻� ����� ����
	/*int size = 10;
	int arr[10];*/

	/*int arr[10] = { 1,2 }; //���� ���� ���� 0�� ��
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}*/

	/*float arr_f[5] = { 1.0f,2.0f,3.0f };
	for (int i = 0; i < 5; i++)
	{
		printf("%.2f\n", arr_f[i]);
	}*/


	//���� vs ���ڿ�
	char c = 'A';
	printf("%c\n", c);

	//���ڿ� ������ '��'�� �ǹ��ϴ� null���� '\0' �� ���ԵǾ����.
	char str[6] = "coding";// �迭�� �ڸ����� 1���� ����
	printf("%s\n", str);//�̴�� ������ ���ڿ��� �����ٴ°��� ǥ���ؾ���.

	//��� str�迭�� ���̸� 7�� ���ľ���.

	//

	//char str2[] = "coding";
	//printf("%s\n", str2);
	//printf("%d\n", sizeof(str2));

	//for (int i = 0; i < sizeof(str2); i++)
	//{
	//	printf("%d\n", str2[i]); //6+1
	//}

	////����� 1byte �ѱ��� 2byte
	//
	//char kor[] = "�����ڵ�";
	//printf("%s\n", kor);
	//printf("%d\n", sizeof(kor));

	//for (int i = 0; i < sizeof(kor); i++)
	//{
	//	printf("%d\n", kor[i]); //8+1
	//}

	//char c_array[7]={'c','o','d','i','n','g','\0'};
	//char c_array[6]={'c','o','d','i','n','g'};
	//printf("%s\n", c_array);

	char c_array[10] = { 'c','o','d','i','n','g' };
	//printf("%s\n", c_array);

	/*for (int i = 0; i < sizeof(c_array); i++)
	{
		printf("%c\n", c_array[i]);
	}*/

	//�ƽ�Ű�ڵ尪 ���
	/*for (int i = 0; i < sizeof(c_array); i++)
	{
		printf("%d\n", c_array[i]);
	}*/


	//���ڿ� �Է¹ޱ� : ������ �������⿹��
	/*char name[256];
	printf("�̸��� �Է��ϼ���");
	scanf_s("%s", name, sizeof(name));
	printf("%s\n",name);*/

	//�ƽ�Ű�ڵ� ? ansi��� �̱�ǥ����ȸ���� ������ ǥ���ڵ� ü��
	//7bit �� 128�� �ڵ�
	//a: 97
	//A: 65
	//0: 48

	printf("%c\n", 'a');
	printf("%d\n", 'a'); //97

	printf("%c\n", 'b');
	printf("%d\n", 'b'); //98

	printf("%c\n", 'A');
	printf("%d\n", 'A'); //65
	
	printf("%c\n", '\0');  //��ĭ���� ����(null)
	printf("%d\n", '\0');  //0���� ����

	printf("%c\n", '0');  //
	printf("%d\n", '0');  //48

	//���� 2 0-127���� �ƽ�Ű�ڵ�

	for (int i = 0; i < 128; i++)
	{
		printf("�ƽ�Ű�ڵ��� ���� %d�� %c\n", i, i);

	}



	return 0;
}