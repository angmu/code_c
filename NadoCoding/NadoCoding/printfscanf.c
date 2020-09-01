#include <stdio.h>
//1개의 플젝에서 main은 1개만 존재해야함..
int main_printf_scanf(void)
{//printf
	//변수는 변하는 수 
	//상수는 변하지 않는 수
	//정수는 소수점x
	//실수는 소수점과 정수 포함
	
	//--------정수형변수---
	//1. 주석 /*숨길문자*/
	//2. 주석 //숨길문자
	//int age = 12;
	//자료형을 사용. 정수라는 자료형을 썻다.
	//형태 : 자료형 변수명
	//printf("%d\n", age);// 12으로 출력됨
	//%d는 정수형을 출력하라는 뜻. \n줄바꿈
	//age = 13; //자료형 타입을 안써줘도된다.
	//printf("%d\n", age); // 13으로 출력됨



	//----실수형변수
	//float f = 45.3f; //무조건 f가 들어가야함
	//printf("%.2f\n", f);

	//double d = 3.3213;
	//printf("%2lf\n", d);

	///**상수*/
	//const int YEAR = 2000;
	//printf("태어난 년도:%d\n", YEAR);
	////YEAR = 2001; //위에서 const라고 상수선언을 했기 때문에 이부분은 에러가 난다.

	////연산
	//int add = 3 + 7;//10
	//printf("3+7=%d\n", add);

	//printf("%d x %d=%d\n", 39,70,39*70); //변수없이 바로 연산 가능 :>


	//scanf
	//키보드 입력을 받아서 저장
	/*int input;
	printf("값을 입력하세오");
	scanf_s("%d", &input);
	printf("입력값: %d\n", input);*/

	/*int one, two, three;
	scanf_s("%d %d %d", &one, &two, &three);
	printf("입력값: %d\n", one);
	printf("입력값: %d\n", two);
	printf("입력값: %d\n", three);*/

	//문자 1글자
	/*char c = 'A';
	printf("%c\n", c);

	char str[256]; // 배열
	scanf_s("%s", str,sizeof(str));//배열은 &없이 그냥 받지만 사이즈는 받아야한다.
	printf("%s\n", str);*/


	//프로젝트
	//경찰관이 범죄자의 정보를 입수 (조서작성)
	// 이름, 나이, 몸무게, 범죄명

	char name[256];
	printf("이름이 뭐에요?");
	scanf_s("%s", name, sizeof(name));

	int age;
	printf("나이가 몇이에오?");
	scanf_s("%d", &age);

	float weight;
	printf("몸무게가 몇이에오?");
	scanf_s("%f", &weight);

	double height;
	printf("키가 몇이에오?");
	scanf_s("%lf", &height);


	char what[256];
	printf("어떤 범죄를 저질렀나요?");
	scanf_s("%s", what, sizeof(what));

	//조서내용 출력
	printf("\n\n----범죄자 정보 출력-----\n\n");
	printf("이름		: %s\n",name);
	printf("나이		: %d\n", age);
	printf("몸무게		: %f\n", weight);
	printf("키			: %lf\n", height);
	printf("범죄사항	: %s\n", what);



	return 0;
}

