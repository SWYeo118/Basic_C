#include <stdio.h>
int main()
{
	int A[10][10] = {
		{ 1, 2, 3, 4, 5, 6},
		{ 9, 10, 11, 12, 13, 14},
		{ 17, 18, 19, 20, 21, 22},
		{ 25, 26, 27, 28, 29, 30},
		{ 33, 34, 35, 36, 37, 38},
		{ 41, 42, 43, 44, 45, 46},
	};
	int B[10][10] = {
		{ 1, 2, 3, 4, 5, 6},
		{ 9, 10, 11, 12, 13, 14},
		{ 17, 18, 19, 20, 21, 22},
		{ 25, 26, 27, 28, 29, 30},
		{ 33, 34, 35, 36, 37, 38},
		{ 41, 42, 43, 44, 45, 46},
	};	
	int AB[10][10] = {0};
	
	for(int i = 0; i <= 4; i++) {
		for(int j = 0; j <= 4; j++) {
			for(int k = 0; k <= 4; k++) {
				AB[i][j] += A[i][k] * B[k][j];
			}
		}
	}
	
	
/*	n�� ��İ��� ��Ģ 



*/	
	printf("AB = \n");  // ��º� 
	for(int index = 0; index <= 2; index++) {
		for(int index2 = 0; index2 <= 2; index2++) {
			printf("%d ", AB[index][index2]); 
	}
		printf("\n");
	
}
	return 0;
	
	
}
