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
	printf("환전을 원하는 금액을 입력하세요(원화) : " );
	scanf("%d", &won);
	printf("환전할 외화를 선택하세요(1:USD, 2:JPY, 3:EUR, 4:CNY, 5:GBP) : " );
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
		printf("환전 결과\n");
		printf("환전규모 : %d \n\n", givenMoney);
		printf("거스름돈 : %.0f원\n", returnMoney);
	return 0;
}






