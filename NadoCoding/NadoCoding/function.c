#include <stdio.h>

//선언 - main함수 위에 선언해야한다.
void p(int num);

void  function_without_return();
int  function_with_return();
void function_without_params();
void function_with_params(int num1,int num2,int num3);

int apple(int total, int ate);//전체 사과중 먹고 남은 사과개수반환

//계산기용 함수
int add(int num1, int num2);
int sub(int num1, int num2);
int mul(int num1, int num2);
int div(int num1, int num2);


int main_function(void)
{
	//function
	//계산기

	int num = 2;
	//printf("num은 %d 입니다\n", num);//2
	p(num);

	num+ = 3;
	//printf("num은 %d 입니다\n", num);//5
	p(num);

	num - = 1;
	//printf("num은 %d 입니다\n", num);//4
	p(num);

	num * = 3;
	//printf("num은 %d 입니다\n", num);//12
	p(num);

	num / = 6;
	//printf("num은 %d 입니다\n", num);//2
	p(num);

	//1.반환값이 없는 함수
	function_without_return();

	//2.반환값이 있는 함수
	int ret = function_with_return();
	p(ret);

	//3,전달값(파라미터)이 없는 함수
	function_without_params();

	//4. 전달값(파라미터)이 있는 함수
	function_with_params(4,2,1);

	//5. 전달값도 받고 반환값도 있는 함수
	int retur = apple(5, 2);//사과 5개중 2개를 먹음
	//printf문내에서도 함수활용이 가능!
	printf("사과 %d개 중에 %d개를 먹으면? %d개가 남아요", 10, 5, apple(10, 4));



	//프로젝트 ! 계산기함수!
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

//정의
//반환형 함수이름 전달값
void p(int num)
{
	printf("num은 %d 입니다\n", num);
}

////전달 36
////함수 : ㅁ+4
////반환 :?
//float 함수이름(int num, char c,float f)
//{
//
//}

void  function_without_return() 
{
	//f3클릭시 이동 :>
	printf("반환형이없는 함수입니다\n");
}

int  function_with_return() 
{

	printf("반환형이있는 함수입니다\n");
	return 10;
};

void function_without_params() 
{
	printf("전달값이 없는 함수입니다\n");
}

void function_with_params(int num1, int num2, int num3) 
{
	printf("전달값이 있는 함수이며 전달받은값은 %d, %d, %d입니다\n",num1,num2,num3);
}
int apple(int total, int ate) 
{
	printf("전달값과 반환값이 있는 함수입니다\n");
	return total - ate;
}

//플젝
//계산기용 함수
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