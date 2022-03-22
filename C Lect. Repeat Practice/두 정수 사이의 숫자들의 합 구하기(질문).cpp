#include <stdio.h>

int main()
{
	int num1, num2, answer;
	printf("정수 두 개를 입력하세요 : ");
	scanf("%d %d", &num1, &num2);
	
	while(num1<num2) 
	{ 	num1++;
		answer += num1;
		if (num1<num2)
		{
		printf("%d + ", num1);
		}
		else
		{
		printf("%d = ", num2);
		}
	}
	printf("%d", answer);
	return 0;
}
