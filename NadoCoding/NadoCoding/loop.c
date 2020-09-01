#include <stdio.h>

//이것은 반복문 실습입니다.
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
	//printf("a는 %d\n", a);
	//a++;
	//printf("a는 %d\n", a);
	//a++; 
	//printf("a는 %d\n", a);
	//a++;

	//int b = 20;
	//printf("a는 %d\n", ++b);//문장 수행전 b를 증가해라
	//printf("a는 %d\n", b++);//문장 수행후 b를 증가해라
	//printf("a는 %d\n", b);
	//

	/*int i = 1;
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);*/


	//반복문 
	//for while do while

	//for(선언;조건;증감) 조건이 맞으면 {}안의 문장을 수행하라는 뜻
	/*for (int i = 0; i <= 10; i++) 
	{
		printf("Hello World %d\n", i);
	}*/
	
	//while (조건)
	//int i = 1;
	//while (i<=10)
	//{
	//	printf("Hello World %d\n", i++);
	//	//I++;
	//}

	//do{} while(조건);
	/*int i = 1;
	do {
		printf("Hello World %d\n", i++);
	} while (i <= 10);*/

	//이중반복문

	/*for (int i = 1; i <= 3; i++) {
		printf("첫번째 반복문 : %d\n", i);

		for (int j = 1; j <= 5; j++) {
			printf("두번째 반복문 : %d\n",j);
		}
	
	}*/


	/*for (int i = 2; i <= 9; i++) 
	{	
		printf("%d단 출력\n",i);
		for (int j = 1; j <= 9; j++) {
			printf("%d x %d =%d\n", i, j, i * j);
		}
	}*/



	//프로젝트 연습
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


	//피라미드를 쌓아라 프로젝트
	int floor;
	printf("몇층으로 쌓을 것이냐?");
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