#include <stdio.h>

int main()
{
	int answer, inputNum;
	printf("1���� N������ ����?\n");
	printf("N�� �Է��ϼ��� : ");
	scanf("%d", &inputNum);
	for(int index=1; index<=inputNum; index+=1)
	{
		answer +=index;
	}
	printf("1���� N������ ���� : %d�Դϴ�.", answer);
	
	return 0;
}
