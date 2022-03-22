#include <stdio.h>

int main()
{
	int answer;
	int index = 1;
	printf("1에서 10까지의 합은?\n");
	do{
		answer += index;
		index++;
	} while(index<=10);
	printf("1에서 10까지의 합은 : %d입니다.", answer);
	
	return 0;
}
