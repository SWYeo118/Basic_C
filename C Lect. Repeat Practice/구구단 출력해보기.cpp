#include <stdio.h>

int main()
{
	int inputNum, index;
	printf("�� ���� ���ðڽ��ϱ�? : ");
	scanf("%d", &inputNum);
	for(int index=1; index<=9; index++)
	{
	printf("%d*%d=%d\n", inputNum, index, inputNum*index);	
	}
	return 0;
}
