#include <stdio.h>

int main()
{
	
	int inputYear;
	printf("���ϴ� ������ �Է��ϼ��� : ");
	scanf("%d", &inputYear);
	if (((inputYear % 4==0) && (inputYear % 100!=0) || (inputYear % 400)==0))
		{printf("%d���� �����Դϴ�", inputYear);
		 } 
	else {printf("%d���� ������ �ƴմϴ�", inputYear);
		 } 
	
	return 0;
	
}


// ���ϴ� ������ �Է��ϸ� ������ Ȯ���Ѵ�?  
