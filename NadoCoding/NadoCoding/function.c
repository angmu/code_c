#include <stdio.h>

//���� - main�Լ� ���� �����ؾ��Ѵ�.
void p(int num);

void  function_without_return();
int  function_with_return();
void function_without_params();
void function_with_params(int num1,int num2,int num3);

int apple(int total, int ate);//��ü ����� �԰� ���� ���������ȯ

//����� �Լ�
int add(int num1, int num2);
int sub(int num1, int num2);
int mul(int num1, int num2);
int div(int num1, int num2);


int main_function(void)
{
	//function
	//����

	int num = 2;
	//printf("num�� %d �Դϴ�\n", num);//2
	p(num);

	num+ = 3;
	//printf("num�� %d �Դϴ�\n", num);//5
	p(num);

	num - = 1;
	//printf("num�� %d �Դϴ�\n", num);//4
	p(num);

	num * = 3;
	//printf("num�� %d �Դϴ�\n", num);//12
	p(num);

	num / = 6;
	//printf("num�� %d �Դϴ�\n", num);//2
	p(num);

	//1.��ȯ���� ���� �Լ�
	function_without_return();

	//2.��ȯ���� �ִ� �Լ�
	int ret = function_with_return();
	p(ret);

	//3,���ް�(�Ķ����)�� ���� �Լ�
	function_without_params();

	//4. ���ް�(�Ķ����)�� �ִ� �Լ�
	function_with_params(4,2,1);

	//5. ���ް��� �ް� ��ȯ���� �ִ� �Լ�
	int retur = apple(5, 2);//��� 5���� 2���� ����
	//printf���������� �Լ�Ȱ���� ����!
	printf("��� %d�� �߿� %d���� ������? %d���� ���ƿ�", 10, 5, apple(10, 4));



	//������Ʈ ! �����Լ�!
	int number = 2;
	number= add(number, 3);
	p(number);

	number = sub(number, 1);
	p(number);

	number = mul(number, 3);
	p(number);

	number = div(number, 6);
	p(number);


	return 0;

}

//����
//��ȯ�� �Լ��̸� ���ް�
void p(int num)
{
	printf("num�� %d �Դϴ�\n", num);
}

////���� 36
////�Լ� : ��+4
////��ȯ :?
//float �Լ��̸�(int num, char c,float f)
//{
//
//}

void  function_without_return() 
{
	//f3Ŭ���� �̵� :>
	printf("��ȯ���̾��� �Լ��Դϴ�\n");
}

int  function_with_return() 
{

	printf("��ȯ�����ִ� �Լ��Դϴ�\n");
	return 10;
};

void function_without_params() 
{
	printf("���ް��� ���� �Լ��Դϴ�\n");
}

void function_with_params(int num1, int num2, int num3) 
{
	printf("���ް��� �ִ� �Լ��̸� ���޹������� %d, %d, %d�Դϴ�\n",num1,num2,num3);
}
int apple(int total, int ate) 
{
	printf("���ް��� ��ȯ���� �ִ� �Լ��Դϴ�\n");
	return total - ate;
}

//����
//����� �Լ�
int add(int num1, int num2) 
{
	return num1 + num2;
}

int sub(int num1, int num2)
{
	return num1 - num2;
}
int mul(int num1, int num2)
{
	return num1 * num2;
}int div(int num1, int num2)
{
	return num1 / num2;
}