#include <stdio.h>

int main()
{
	int answer, inputNum;
	printf("1에서 N까지의 합은?\n");
	printf("N을 입력하세요 : ");
	scanf("%d", &inputNum);
	for(int index=1; index<=inputNum; index+=1)
	{
		answer +=index;
	}
	printf("1에서 N까지의 합은 : %d입니다.", answer);
	
	return 0;
}
