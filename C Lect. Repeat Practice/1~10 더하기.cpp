#include <stdio.h>

int main()
{
	int answer;
	int index = 1;
	printf("1���� 10������ ����?\n");
	while(index<=10) 
	{
		answer += index;
		index++;
	}
	printf("1���� 10������ ���� : %d�Դϴ�.", answer);
	
	return 0;
}
