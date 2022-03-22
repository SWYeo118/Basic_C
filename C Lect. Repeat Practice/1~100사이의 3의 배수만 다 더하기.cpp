#include <stdio.h>

int main()
{
	int answer;
	printf("1에서 100 사이의 3의 배수의 합은?\n");
	for(int index=3; index<=100; index+=3)
	{
		answer +=index;
		printf("%d ", index) ;
	}
	printf("\n합은 : %d입니다.", answer);
	
	return 0;
}
