
#include <stdio.h>
#include <time.h>

int main()
{
	
	time_t t = time(NULL);
	struct tm tm = *localtime(&t);
	
	int proceed;
	int reOrder=0;

	const int MorNor = 59000;
	const int MorTeen = 52000;
	const int MorKid = 47000;
	const int MorBaby = 15000;
	const int MorOld = 47000;
	
	const int NigNor = 56000; 	
	const int NigTeen = 50000;
	const int NigKid = 46000;
	const int NigBaby = 15000;
	const int NigOld = 46000;
	
	do
	{

	int index = 0, sumPay = 0;
	int ticketType[10] = {0,}, ticketNum[10] = {0,}, advantage[10] = {0,}, totalPay[10] = {0,}, citizenNum[10] = {0,}, year[10] = {0,}, numBack[10] = {0,}, calYear[10] = {0,}, norPay[10] = {0,};
	int month[10] = {0,}, day[10] = {0,}, gap[10] = {0,};
	int nowYear = (tm.tm_year+1900), nowMonth = (tm.tm_mon+1), nowDays = (tm.tm_mday);
	
	do
	{ 
	
	printf("%18s %d�� %d�� %d�� %02d:%02d:%02d\n\n", "����ð� :",tm.tm_year+1900, tm.tm_mon+1, tm.tm_mday, tm.tm_hour, tm.tm_min, tm.tm_sec);
	printf("v ���̰��� Ƽ�� �߱� ���񽺿� ���� ���� ȯ���մϴ�.\n\n");
	printf("�߱��Ͻ� ������ �����ϼ���\n1.�ְ���\n2.�߰���\n");
	scanf("%d", &ticketType[index]); 
	if (!(ticketType[index] == 1 || ticketType[index] == 2 ))
	{for(;;)
		{
		printf("������ �߸� �����ϼ̽��ϴ�. �ٽ� �����ϼ���\n1.�ְ���\n2.�߰���\n");
		scanf("%d", &ticketType[index]); 
		if ((ticketType[index] == 1 || ticketType[index] == 2 ))
			break;
		}
	}
	printf("���� Ȯ���� ���� �ֹε�Ϲ�ȣ ���ڸ��� �� �ڸ� ���ڸ��� �Է��ϼ���(ex 930118-1)\n");
	scanf("%d-%d", &citizenNum[index], &numBack[index]);												
	
	year[index] = citizenNum[index]/10000;
	month[index] = (citizenNum[index]%1000)/100;
	day[index] = citizenNum[index]%100;
	
	if (numBack[index]==1 || numBack[index]==2)
	 {calYear[index] = (tm.tm_year - year[index]);}
	else if (numBack[index]==3 || numBack[index]==4)
	 {calYear[index] = ((tm.tm_year-100) - year[index]);}
	 
	if(month[index] <=(tm.tm_mon+1) && day[index] <= (tm.tm_mday))
		{
			calYear[index] = calYear[index];
		} 
		else
		{
			calYear[index] = calYear[index]-1;
		}
		printf("�� %d�� �Դϴ�.\n",calYear[index]); 
	if (ticketType[index] == 2)
		{
			if(calYear[index]<3)
			{
				norPay[index] = NigBaby;
			}
			else if (calYear[index]<12)
			{
				norPay[index] = NigKid;
			}
			else if (calYear[index]<=18)
			{
				norPay[index] = NigTeen;
			}
			else if (calYear[index]<65)
			{
				norPay[index] = NigNor;
			}
			else
			{
				norPay[index] = NigOld;
			}		
		}
	else if (ticketType[index] == 1)
			{
					if(calYear[index]<3)
				{
					norPay[index] = MorBaby;
				}
					else if (calYear[index]<12)
				{
					norPay[index] = MorKid;
				}
					else if (calYear[index]<=18)
				{
					norPay[index] = MorTeen;
				}
					else if (calYear[index]<65)
				{
					norPay[index] = MorNor;
				}
					else
				{
					norPay[index] = MorOld;
				}
			}
	printf("Ƽ�� �� ���� �߱��Ͻðڽ��ϱ�?\n");
	scanf("%d", &ticketNum[index]);
	printf("�������� �����ϼ���\n");
	printf("1. ����\n2. �����\n3. ����������\n4. �ް��庴\n5. �ӻ��\n6. �ٵ��� �ູī��\n");
	scanf("%d", &advantage[index]);
	if (!(advantage[index] == 1 || advantage[index] == 2 || advantage[index] == 3 || advantage[index] == 4 || advantage[index] == 5 || advantage[index] == 6 ))
		{for(;;)
			{
				printf("�������� �߸� �����ϼ̽��ϴ�. �ٽ� �����ϼ���\n1. ����\n2. �����\n3. ����������\n4. �ް��庴\n5. �ӻ��\n6. �ٵ��� �ູī��\n");
				scanf("%d", &advantage[index]); 
		if ((advantage[index] == 1 || advantage[index] == 2 || advantage[index] == 3 || advantage[index] == 4 || advantage[index] == 5 || advantage[index] == 6 ))
			break;
		}
	}
	if(advantage[index]==1)
		{
		norPay[index]=norPay[index];}
		
		else if(advantage[index]==2)
		{
		norPay[index]=norPay[index]/2;}
			
		else if(advantage[index]==3)
		{
		norPay[index]=norPay[index]/2;}

		else if(advantage[index]==4)	
		{
		norPay[index]=norPay[index]*0.51;}

		else if(advantage[index]==5)
		{
		norPay[index]=norPay[index]/2;}
		
		else if(advantage[index]==6)
		 {
		 norPay[index]=norPay[index]*0.7;}
		 
	totalPay[index] = (ticketNum[index] * norPay[index]);
	printf("�� Ƽ�� ������ %d �� �Դϴ�.\n����ؼ� �߱��� �����Ͻðڽ��ϱ�? 1.��/2.�ƴϿ�\n", totalPay[index]);
	scanf("%1d", &proceed);  //������� index �� = 0
	index++;	//�� �Ʒ����� index �� = 1
	}
	while(proceed<=1);
	printf("�̿����ּż� �����մϴ�.\n\n");
	printf("===============��������==============\n\n");
	
	FILE *fp = fopen("report.csv", "a+");

	for(int i = 0; i<index;i++) 
	{

		if ((ticketType[i]) == 1 )
		{
			printf("�ְ��� ");
		}
		else
		{
			printf("�߰��� ");
		}
		if ((calYear[i]<3)) 
		{
			printf("���� ");
		}
		else if ((calYear[i]<12))
		{
			printf("��� ");
		}
		else if ((calYear[i]<=18))
		{
			printf("û�ҳ� ");
		}
		else if ((calYear[i]<65))
		{
			printf("���� ");
		}
		else
		{
			printf("��� ");
		}
		printf("x %d �� ", ticketNum[i]); 
		printf(" : %d �� ", totalPay[i]);
		
	if(advantage[i]==1)
		{
		printf("������ ������\n");}
		else if(advantage[i]==2)
		{
		printf("����� �������\n");}
		else if(advantage[i]==3)
		{
		printf("���������� �������\n");}
		else if(advantage[i]==4)	
		{
		printf("�ް��庴 �������\n");}
		else if(advantage[i]==5)
		{
		printf("�ӻ�� �������\n");}
		else if(advantage[i]==6)
		 {
		printf("�ٵ��� �ູī�� �������\n");} 
		sumPay += totalPay[i];
		
	fprintf(fp, "%d,%d,%d,%d,%d,%d,%d,%d\n", tm.tm_year+1900, tm.tm_mon+1, tm.tm_mday, ticketType[i], calYear[i], ticketNum[i], advantage[i], totalPay[i]);
	
	}
	printf("�� ���� �ݾ� : %d ��\n\n", sumPay);
	printf("=====================================\n");
	printf("\n- ���Ӱ� �߱��� �����Ͻðڽ��ϱ�? 1.�� / 2.�ƴϿ�\n");
	scanf("%1d", &reOrder);
	
 	fclose(fp);
	}while(reOrder<2);
	return 0;
}

