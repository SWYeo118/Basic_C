#include <stdio.h>

int main ()
{
	int year, month;
	
	printf("ã���� �ϴ� ������ �Է��ϼ��� : ");
	scanf("%d", &year);
	printf("ã���� �ϴ� ���� �Է��ϼ��� : ");
	scanf("%d", &month); 
	printf("��\t��\tȭ\t��\t��\t��\t��\n");
	for (int index =1; index <= 31; index++)
	{printf("%d\t", index);
	}
	
	return 0;
}

//
