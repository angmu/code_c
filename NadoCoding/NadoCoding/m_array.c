#include <stdio.h>

int main_m_array(void) {

	//陥託据 壕伸 Multidimensional Array
	/*int i;//け
	int arr[5];
	//けけけけけ
	//arr[0][1][2][3][4]

	int arr2[2][5];
	//けけけけけ
	//けけけけけ  //5鯵促軒亜 2鯵昔 壕伸
	//arr[0,0][0,1][0,2][0,3][0,4]-> arr2[0][0]
	//arr[1,0][1,1][1,2][1,3][1,4]-> arr2[1][4]


	int arr3[4][2];
	//けけ
	//けけ
	//けけ
	//けけ
	//[0,0],[0,1]
	//[1,0],[1,1]
	//[2,0],[2,1]
	//[3,0],[3,1]

	int arr4[3][3][3];
	//けけけ
	//けけけ
	//けけけ

	//けけけ
	//けけけ
	//けけけ

	//けけけ
	//けけけ
	//けけけ
	*/
	//痕呪羨悦

	int arr[5] = { 1,2,3,4,5 };
	int arr2[2][5] = {
		{ 1,2,3,4,5 },
		{ 1, 2, 3, 4, 5 }
	};
	int arr3[4][2] = {
		{ 1,2},
		{ 1, 2 },
		{ 1, 2 },
		{ 1, 2 }
	};

	for (int i = 0; i < 4; i++) 
	{
		for (int j = 0; j < 2; j++)
		{
			printf("2託据 壕伸 %d,%d税 葵精 %d\n", i, j, arr3[i][j]);
		}
		printf("\n");
	}



	int arr4[3][3][3] = {
		{ 
		{ 1,2,3},
		{ 1,2,3},
		{ 1,2,3} 
		}, { 
		{ 1,2,3},
		{ 1,2,3},
		{ 1,2,3}
		}, { 
		{ 1,2,3},
		{ 1,2,3},
		{ 1,2,3}
		}
	};


	for (int i = 0; i < 3; i++)
	{

		for (int j = 0; j < 3; j++)
		{
			for(int k=0;k<3;k++)
			{
			printf("3託据 壕伸 %d,%d,%d税 葵精 %d\n", i, j,k, arr4[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}



	return 0;
}