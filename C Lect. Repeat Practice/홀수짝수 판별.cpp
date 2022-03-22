#include <stdio.h>

int main()
{
	int inputNum;
	printf("숫자 입력 : ");
	scanf("%d", &inputNum);
	if (inputNum%2 == 0)
	{
	printf("짝수입니다.");	
	}
	else
	{
	printf("홀수입니다.");	
	}
	return 0;
}
