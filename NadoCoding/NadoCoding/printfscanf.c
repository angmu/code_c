#include <stdio.h>
//1���� �������� main�� 1���� �����ؾ���..
int main_printf_scanf(void)
{//printf
	//������ ���ϴ� �� 
	//����� ������ �ʴ� ��
	//������ �Ҽ���x
	//�Ǽ��� �Ҽ����� ���� ����
	
	//--------����������---
	//1. �ּ� /*���湮��*/
	//2. �ּ� //���湮��
	//int age = 12;
	//�ڷ����� ���. ������� �ڷ����� ����.
	//���� : �ڷ��� ������
	//printf("%d\n", age);// 12���� ��µ�
	//%d�� �������� ����϶�� ��. \n�ٹٲ�
	//age = 13; //�ڷ��� Ÿ���� �Ƚ��൵�ȴ�.
	//printf("%d\n", age); // 13���� ��µ�



	//----�Ǽ�������
	//float f = 45.3f; //������ f�� ������
	//printf("%.2f\n", f);

	//double d = 3.3213;
	//printf("%2lf\n", d);

	///**���*/
	//const int YEAR = 2000;
	//printf("�¾ �⵵:%d\n", YEAR);
	////YEAR = 2001; //������ const��� ��������� �߱� ������ �̺κ��� ������ ����.

	////����
	//int add = 3 + 7;//10
	//printf("3+7=%d\n", add);

	//printf("%d x %d=%d\n", 39,70,39*70); //�������� �ٷ� ���� ���� :>


	//scanf
	//Ű���� �Է��� �޾Ƽ� ����
	/*int input;
	printf("���� �Է��ϼ���");
	scanf_s("%d", &input);
	printf("�Է°�: %d\n", input);*/

	/*int one, two, three;
	scanf_s("%d %d %d", &one, &two, &three);
	printf("�Է°�: %d\n", one);
	printf("�Է°�: %d\n", two);
	printf("�Է°�: %d\n", three);*/

	//���� 1����
	/*char c = 'A';
	printf("%c\n", c);

	char str[256]; // �迭
	scanf_s("%s", str,sizeof(str));//�迭�� &���� �׳� ������ ������� �޾ƾ��Ѵ�.
	printf("%s\n", str);*/


	//������Ʈ
	//�������� �������� ������ �Լ� (�����ۼ�)
	// �̸�, ����, ������, ���˸�

	char name[256];
	printf("�̸��� ������?");
	scanf_s("%s", name, sizeof(name));

	int age;
	printf("���̰� ���̿���?");
	scanf_s("%d", &age);

	float weight;
	printf("�����԰� ���̿���?");
	scanf_s("%f", &weight);

	double height;
	printf("Ű�� ���̿���?");
	scanf_s("%lf", &height);


	char what[256];
	printf("� ���˸� ����������?");
	scanf_s("%s", what, sizeof(what));

	//�������� ���
	printf("\n\n----������ ���� ���-----\n\n");
	printf("�̸�		: %s\n",name);
	printf("����		: %d\n", age);
	printf("������		: %f\n", weight);
	printf("Ű			: %lf\n", height);
	printf("���˻���	: %s\n", what);



	return 0;
}

