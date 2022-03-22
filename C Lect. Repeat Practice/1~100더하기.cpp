#include <stdio.h>

int main()
{
	int answer;
	printf("1에서 100까지의 합은?\n");
	for(int index=1; index<=100; index+=1)
	{
		answer +=index;
	}
	printf("1에서 100까지의 합은 : %d입니다.", answer);
	
	return 0;
}
