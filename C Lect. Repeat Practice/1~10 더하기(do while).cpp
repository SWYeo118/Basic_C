#include <stdio.h>

int main()
{
	int answer;
	int index = 1;
	printf("1���� 10������ ����?\n");
	do{
		answer += index;
		index++;
	} while(index<=10);
	printf("1���� 10������ ���� : %d�Դϴ�.", answer);
	
	return 0;
}
