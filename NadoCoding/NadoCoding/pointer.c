#include <stdio.h>

void swap(int a, int b);
void swap_addr(int *a, int *b);
void changeArray(int* ptr);
int main_pointer(void)
{
	//포인터
	//철수 101호
	//영희 201호
	//민수 301호

	//int 철수 = 1;//암호
	//int 영희 = 2;
	//int 민수 = 3;

	//printf("철수네 주소: %d, 암호: %d\n", &철수, 철수);
	//printf("영희네 주소: %d, 암호: %d\n", &영희, 영희);
	//printf("민수네 주소: %d, 암호: %d\n", &민수, 민수);

	////미션맨
	////아파트의 각 집에가서 암호 확인

	//int* 미션맨;
	//미션맨 = &철수;
	//printf("미션맨이 방문하는 곳 주소 %d, 암호: %d\n", 미션맨, *미션맨);

	//미션맨 = &영희;
	//printf("미션맨이 방문하는 곳 주소 %d, 암호: %d\n", 미션맨, *미션맨);

	//미션맨 = &민수;
	//printf("미션맨이 방문하는 곳 주소 %d, 암호: %d\n", 미션맨, *미션맨);

	////두번째 미션 : 각 암호에 3을 곱해라
	//미션맨 = &철수;
	//*미션맨 = *미션맨 * 3;
	//printf("미션맨이 암호를 바꾼 주소 %d, 암호: %d\n", 미션맨, *미션맨);

	//미션맨 = &영희;
	//*미션맨 = *미션맨 * 3;
	//printf("미션맨이 암호를 바꾼 주소 %d, 암호: %d\n", 미션맨, *미션맨);

	//미션맨 = &민수;
	//*미션맨 = *미션맨 * 3;
	//printf("미션맨이 암호를 바꾼 주소 %d, 암호: %d\n", 미션맨, *미션맨);


	////스파이
	////미션맨이 바꾼 암호에서 2를 뺀다.
	////미션맨, 스파이 둘다 모두 누군가의 아파트 주소를 가짐. 
	//int* 스파이 = 미션맨;
	//printf("스파이가 미션수행중 \n");
	//스파이 = &철수;
	//*스파이 = *스파이 - 2;
	//printf("스파이가 방문한 주소 : %d, 암호 %d\n", 스파이, *스파이);


	//스파이 = &영희;
	//*스파이 = *스파이 - 2;
	//printf("스파이가 방문한 주소 : %d, 암호 %d\n", 스파이, *스파이);


	//스파이 = &민수;
	//*스파이 = *스파이 - 2;
	//printf("스파이가 방문한 주소 : %d, 암호 %d\n", 스파이, *스파이);

	//printf("철수,영희 민수는 암호를 보고 깜놀\n\n\n");
	//printf("철수네 주소: %d, 암호: %d\n", &철수, 철수);
	//printf("영희네 주소: %d, 암호: %d\n", &영희, 영희);
	//printf("민수네 주소: %d, 암호: %d\n", &민수, 민수);

	////미션맨, 스파이 주소
	//printf("미션맨네 주소: %d\n", &미션맨);
	//printf("스파이네 주소: %d\n", &스파이);


	//배열과 포인터의 관계

	//int arr[3] = { 5,20,23 };
	//int* ptr = arr;
	///*for (int i = 0; i < 3; i++)
	//{
	//	printf("배열 arr[%d]의 값: %d\n", i, arr[i]);
	//}*/
	//for (int i = 0; i < 3; i++)
	//{
	//	printf("배열 arr[%d]의 값: %d\n", i, *(arr+i));
	//}

	//for (int i = 0; i < 3; i++)
	//{
	//	//printf("배열 arr[%d]의 값: %d\n", i, *(ptr + i));
	//	printf("배열 ptr[%d]의 값: %d\n", i, ptr[i]);
	//}

	//printf("arr 자체의 값: %d\n", arr);
	//printf("arr[0]의 주소: %d\n", &arr[0]);


	//printf("arr 자체의 값이 가지는 주소의 실제값: %d\n", *arr);//*(arr+0)
	//printf("arr[0]의 값: %d\n", *&arr[0]);

	////*&아무것도 없는것과 같다.(서로 상쇄된다)

	//printf("arr[0]의 값: %d\n", *&arr[0]);
	//printf("arr[0]의 값: %d\n", arr[0]);

	//swap 값을 바꿈.
	//int a = 10;
	//int b = 20;
	//printf("a의 주소값: %d\n", &a);
	//printf("b의 주소값: %d\n", &b);
	//
	//printf("Swap  함수건=> a :%d, b:%d\n", a, b);
	//swap(a, b);
	//printf("Swap  함수건=> a :%d, b:%d\n", a, b);

	////주소값 자체를 넘김.
	//printf("Swap  함수건=> a :%d, b:%d\n", a, b);
	//swap_addr(&a, &b);
	//printf("Swapaddr  함수건=> a :%d, b:%d\n", a, b);

	//배열일때 arr2->주소.
	int arr2[3] = { 10,20,30 };

	changeArray(arr2);

	for (int i = 0; i < 3; i++)
	{
		printf("arr[%d]\n", arr2[i]);

	}



	return 0;
}

void swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	printf("a의 주소값: %d\n", &a);
	printf("b의 주소값: %d\n", &b);

	printf("Swap  함수내=> a :%d, b:%d\n", a, b);
}


void swap_addr(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
	printf("a의 주소값: %d\n", &a);
	printf("b의 주소값: %d\n", &b);

	printf("Swap  함수내=> a :%d, b:%d\n", *a, *b);
}


void changeArray(int* ptr)
{
	ptr[2] = 60;
}