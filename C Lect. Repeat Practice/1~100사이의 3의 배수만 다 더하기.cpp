#include <stdio.h>

int main()
{
	int answer;
	printf("1���� 100 ������ 3�� ����� ����?\n");
	for(int index=3; index<=100; index+=3)
	{
		answer +=index;
		printf("%d ", index) ;
	}
	printf("\n���� : %d�Դϴ�.", answer);
	
	return 0;
}
