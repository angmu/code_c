#include <stdio.h>

//�̰��� �ݺ��� �ǽ��Դϴ�.
int main(void)
{
	//
	/*printf("Hello World\n");
	printf("Hello World\n");
	printf("Hello World\n");
	printf("Hello World\n");
	printf("Hello World\n");
	printf("Hello World\n");
	printf("Hello World\n");
	printf("Hello World\n");
	printf("Hello World\n");
	printf("Hello World\n");*/

	//int a = 10;
	//printf("a�� %d\n", a);
	//a++;
	//printf("a�� %d\n", a);
	//a++; 
	//printf("a�� %d\n", a);
	//a++;

	//int b = 20;
	//printf("a�� %d\n", ++b);//���� ������ b�� �����ض�
	//printf("a�� %d\n", b++);//���� ������ b�� �����ض�
	//printf("a�� %d\n", b);
	//

	/*int i = 1;
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);*/


	//�ݺ��� 
	//for while do while

	//for(����;����;����) ������ ������ {}���� ������ �����϶�� ��
	/*for (int i = 0; i <= 10; i++) 
	{
		printf("Hello World %d\n", i);
	}*/
	
	//while (����)
	//int i = 1;
	//while (i<=10)
	//{
	//	printf("Hello World %d\n", i++);
	//	//I++;
	//}

	//do{} while(����);
	/*int i = 1;
	do {
		printf("Hello World %d\n", i++);
	} while (i <= 10);*/

	//���߹ݺ���

	/*for (int i = 1; i <= 3; i++) {
		printf("ù��° �ݺ��� : %d\n", i);

		for (int j = 1; j <= 5; j++) {
			printf("�ι�° �ݺ��� : %d\n",j);
		}
	
	}*/


	/*for (int i = 2; i <= 9; i++) 
	{	
		printf("%d�� ���\n",i);
		for (int j = 1; j <= 9; j++) {
			printf("%d x %d =%d\n", i, j, i * j);
		}
	}*/



	//������Ʈ ����
	/*
	*
	**
	***
	****
	*****
	*/

	for (int i = 0; i < 5; i++) {
	
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}

	/*
	     *
	    **
	   ***
	  ****
	 *****
	*/

	for (int i = 0; i < 5; i++) {
		
		for (int j = i; j < 5-1; j++) {
			printf(" ");
		}
		for (int k = 0; k <= i; k++) {
			printf("*");
		}
		printf("\n");
	}



	/*
	*****
	****
	***
	**
	*
	*/

	for (int i = 4; i >= 0; i--) {
		for (int j = 0; j<= i; j++) {
			printf("*");
		}
	
		printf("\n");
	}


	//�Ƕ�̵带 �׾ƶ� ������Ʈ
	int floor;
	printf("�������� ���� ���̳�?");
	scanf_s("%d", &floor);

	/*
		
	     	*
		   ***
		  *****
		********
	
	*/
		
	for(int i = 0; i < floor; i++)
{
		for (int j = i; j < floor - 1; j++) {
			printf(" ");
		}
		for (int k = 0; k < i*2+1; k++) {
			printf("*");
		}
		printf("\n");
	}
		

	return 0;
}