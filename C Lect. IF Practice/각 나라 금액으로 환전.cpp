#include <stdio.h>
int main()
{
	int won, num, givenMoney;
	const float USD = 1232.00;
	const float JPY = 10.5928;
	const float EUR = 1354.46;
	const float CNY = 194.63;
	const float GBP = 1612.50; 
	float exchangeRate, returnMoney;
	printf("ȯ���� ���ϴ� �ݾ��� �Է��ϼ���(��ȭ) : " );
	scanf("%d", &won);
	printf("ȯ���� ��ȭ�� �����ϼ���(1:USD, 2:JPY, 3:EUR, 4:CNY, 5:GBP) : " );
	scanf("%d", &num);
	if (num == 1)
	{
 		exchangeRate = USD;
	}
	else if (num == 2)
	{
		exchangeRate = JPY;
	}
	else if (num == 3)
	{
		exchangeRate = EUR;
	}
	else if (num == 4)	
	{
		exchangeRate = CNY;
	}
	else if (num == 5)
	{
		exchangeRate = GBP;
	}
	givenMoney = won/exchangeRate;
	returnMoney = won - exchangeRate * givenMoney;
		printf("ȯ�� ���\n");
		printf("ȯ���Ը� : %d \n\n", givenMoney);
		printf("�Ž����� : %.0f��\n", returnMoney);
	return 0;
}






