
#include <stdio.h>
#include <time.h>

int main()
{
	
	time_t t = time(NULL);
	struct tm tm = *localtime(&t);
	
	int proceed;
	do
	{
	int ticketType, ticketNum, advantage, totalPay, citizenNum, year, numBack, calYear, norPay;
	int month, day, gap;
	const int MorNor = 59000;
	const int MorTeen = 52000;
	const int MorKid = 47000;
	const int MorBaby = 15000;
	const int MorOld = 47000;
	
	const int NigNor = 56000; 			// ����� �����̸��� �빮�ڷ� ���� 
	const int NigTeen = 50000;
	const int NigKid = 46000;
	const int NigBaby = 15000;
	const int NigOld = 46000;
	printf("%18s %d�� %d�� %d�� %02d:%02d:%02d\n\n", "����ð� :",tm.tm_year+1900, tm.tm_mon+1, tm.tm_mday, tm.tm_hour, tm.tm_min, tm.tm_sec);
	printf("v ���̰��� Ƽ�� �߱� ���񽺿� ���� ���� ȯ���մϴ�.\n\n");
	printf("�߱��Ͻ� ������ �����ϼ���\n1.�ְ���\n2.�߰���\n");
	scanf("%d", &ticketType); 
	if (!(ticketType == 1 || ticketType == 2 ))
	{for(;;)
		{
		printf("������ �߸� �����ϼ̽��ϴ�. �ٽ� �����ϼ���\n1.�ְ���\n2.�߰���\n");
		scanf("%d", &ticketType); 
		if ((ticketType == 1 || ticketType == 2 ))
			break;
		}
	}
	printf("���� Ȯ���� ���� �ֹε�Ϲ�ȣ ���ڸ��� �� �ڸ� ���ڸ��� �Է��ϼ���(ex 930118-1)\n");
	scanf("%d-%d", &citizenNum, &numBack);												
	
	year = citizenNum/10000;
	month = (citizenNum%1000)/100;
	day = citizenNum%100;
	
	if (numBack==1 || numBack==2)
	 {calYear = (tm.tm_year - year);}
	else if (numBack==3 || numBack==4)
	 {calYear = ((tm.tm_year-100) - year);}
	 
	if(month <=(tm.tm_mon+1) && day <= (tm.tm_mday))
		{
			calYear = calYear;
		} 
		else
		{
			calYear = calYear-1;
		}
		printf("�� %d�� �Դϴ�.\n",calYear); 
	if (ticketType == 2)
		{
			if(calYear<3)
			{
				norPay = NigBaby;
			}
			else if (calYear<12)
			{
				norPay = NigKid;
			}
			else if (calYear<=18)
			{
				norPay = NigTeen;
			}
			else if (calYear<65)
			{
				norPay = NigNor;
			}
			else
			{
				norPay = NigOld;
			}		
		}
	else if (ticketType == 1)
			{
					if(calYear<3)
				{
					norPay = MorBaby;
				}
					else if (calYear<12)
				{
					norPay = MorKid;
				}
					else if (calYear<=18)
				{
					norPay = MorTeen;
				}
					else if (calYear<65)
				{
					norPay = MorNor;
				}
					else
				{
					norPay = MorOld;
				}
			}
			
	printf("Ƽ�� �� ���� �߱��Ͻðڽ��ϱ�?\n");
	scanf("%d", &ticketNum);
	printf("�������� �����ϼ���\n");
	printf("1. ����\n2. �����\n3. ����������\n4. �ް��庴\n5. �ӻ��\n6. �ٵ��� �ູī��\n");
	scanf("%d", &advantage);
if (!(advantage == 1 || advantage == 2 || advantage == 3 || advantage == 4 || advantage == 5 || advantage == 6 ))
	{for(;;)
		{
		printf("�������� �߸� �����ϼ̽��ϴ�. �ٽ� �����ϼ���\n1. ����\n2. �����\n3. ����������\n4. �ް��庴\n5. �ӻ��\n6. �ٵ��� �ູī��\n");
		scanf("%d", &advantage); 
		if ((advantage == 1 || advantage == 2 || advantage == 3 || advantage == 4 || advantage == 5 || advantage == 6 ))
			break;
		}
	}
	if(advantage==1)
		{
		norPay=norPay;}
		
		else if(advantage==2)
		{
		norPay=norPay/2;}
			
		else if(advantage==3)
		{
		norPay=norPay/2;}

		else if(advantage==4)		
		{
		norPay=norPay*0.51;}

		else if(advantage==5)
		{
		norPay=norPay/2;}
		
		else if(advantage==6)
		 {
		 norPay=norPay*0.7;}
		 
	totalPay = (ticketNum * norPay);
	printf("�� Ƽ�� ������ %d �� �Դϴ�.\n����ؼ� �߱��� �����Ͻðڽ��ϱ�? 1.��/2.�ƴϿ�\n", totalPay);
	
	scanf("%1d", &proceed);
	}
	
	while(proceed<=1);
	printf("�̿����ּż� �����մϴ�.");

	return 0;
}

/*
���� 
�59,000��
û�ҳ�52,000�� 
���47,000��
���̺�15,000��

�߰��� 
�56,000��
û�ҳ�50,000��
���46,000�� 
���̺�15,000��

- ���̺�
1) 0~12���� �̸� : ��ũ ���� �� ���� ���̽ü�(Ű���丮�� ��) ���� �̿�
2) 12���� �̻� 36���� �̸� : ��ũ ���� ����(��, ��ü ���尴 ����), ���� ���̽ü� �̿��� ����� �̿� ����

- 36���� �̻� ~ �� 12�� : ��� ��� ����

- �� 13�� �̻� ~ �� 18�� : û�ҳ� ��� ����(�б� �� �г� ����)

- �� 65�� �̻� : ��� ��� ����(��Ÿ ��� ����Ұ�)


*/
