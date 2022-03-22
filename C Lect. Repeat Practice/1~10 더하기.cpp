#include <stdio.h>

int main()
{
	int answer;
	int index = 1;
	printf("1에서 10까지의 합은?\n");
	while(index<=10) 
	{
		answer += index;
		index++;
	}
	printf("1에서 10까지의 합은 : %d입니다.", answer);
	
	return 0;
}
