#include <stdio.h>

int main()
{
	int answer;
	printf("1���� 100������ ����?\n");
	for(int index=1; index<=100; index+=1)
	{
		answer +=index;
	}
	printf("1���� 100������ ���� : %d�Դϴ�.", answer);
	
	return 0;
}
