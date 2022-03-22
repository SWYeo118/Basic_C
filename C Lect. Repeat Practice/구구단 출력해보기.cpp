#include <stdio.h>

int main()
{
	int inputNum, index;
	printf("몇 단을 보시겠습니까? : ");
	scanf("%d", &inputNum);
	for(int index=1; index<=9; index++)
	{
	printf("%d*%d=%d\n", inputNum, index, inputNum*index);	
	}
	return 0;
}
