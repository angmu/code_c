#include <stdio.h>

int main_array_project(void)
{
	////배열
	//int subway_1 = 30;//지하철 1호차에 30명이 타고있다.
	//int subway_2 = 40;
	//int subway_3 = 50;

	//printf("지하철 1호차에 %d명이 타고 있습니다", subway_1);
	//printf("지하철 1호차에 %d명이 타고 있습니다", subway_2);
	//printf("지하철 1호차에 %d명이 타고 있습니다", subway_3);

	//여러 개의 변수를 함께 동시에 생성
	//int subway_array[3]; //0,1,2

	//subway_array[0] = 30;
	//subway_array[1] = 40;
	//subway_array[2] = 50;

	//for (int i = 0; i < 3; i++)
	//{
	//	printf("지하철 %d호차에 %d명이 타고 있습니다", i + 1, subway_array[i]);

	//}

	//값 설정 방법-
	/*int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}*/

	//초기화를 반드시 해야함.
	/*int arr[10];
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}*/



	//배열 크기는 항상 상수로 선언
	/*int size = 10;
	int arr[10];*/

	/*int arr[10] = { 1,2 }; //선언 외의 값은 0이 들어감
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}*/

	/*float arr_f[5] = { 1.0f,2.0f,3.0f };
	for (int i = 0; i < 5; i++)
	{
		printf("%.2f\n", arr_f[i]);
	}*/


	//문자 vs 문자열
	char c = 'A';
	printf("%c\n", c);

	//문자열 끝에는 '끝'을 의미하는 null문자 '\0' 이 포함되어야함.
	char str[6] = "coding";// 배열의 자리마다 1개씩 넣음
	printf("%s\n", str);//이대로 찍으면 문자열이 끝났다는것을 표시해야함.

	//고로 str배열의 길이를 7로 고쳐야함.

	//

	//char str2[] = "coding";
	//printf("%s\n", str2);
	//printf("%d\n", sizeof(str2));

	//for (int i = 0; i < sizeof(str2); i++)
	//{
	//	printf("%d\n", str2[i]); //6+1
	//}

	////영어는 1byte 한글은 2byte
	//
	//char kor[] = "나도코딩";
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

	//아스키코드값 출력
	/*for (int i = 0; i < sizeof(c_array); i++)
	{
		printf("%d\n", c_array[i]);
	}*/


	//문자열 입력받기 : 경찰서 조서쓰기예제
	/*char name[256];
	printf("이름을 입력하세오");
	scanf_s("%s", name, sizeof(name));
	printf("%s\n",name);*/

	//아스키코드 ? ansi라고 미국표준협회에서 제시한 표준코드 체계
	//7bit 총 128개 코드
	//a: 97
	//A: 65
	//0: 48

	printf("%c\n", 'a');
	printf("%d\n", 'a'); //97

	printf("%c\n", 'b');
	printf("%d\n", 'b'); //98

	printf("%c\n", 'A');
	printf("%d\n", 'A'); //65
	
	printf("%c\n", '\0');  //빈칸으로 나옴(null)
	printf("%d\n", '\0');  //0으로 나옴

	printf("%c\n", '0');  //
	printf("%d\n", '0');  //48

	//참고 2 0-127사이 아스키코드

	for (int i = 0; i < 128; i++)
	{
		printf("아스키코드의 정수 %d는 %c\n", i, i);

	}



	return 0;
}