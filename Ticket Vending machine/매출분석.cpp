
#include <stdio.h>
#include <time.h>

int main()
{

	const int MAX = 100;
	int count = 0;
	int year[MAX], month[MAX], day[MAX], ticketType[MAX], calYear[MAX], ticketNum[MAX], advantage[MAX], totalPay[MAX];
	int sumTicketnum[MAX];

	printf("=============================����м�����=============================\n\n");
	printf("����\t��\t��\t����\t����\t����\t������\t�ݾ�\n");
	
	FILE *fp = fopen("report.csv", "r+"); 

	while(fscanf(fp, "%d,%d,%d,%d,%d,%d,%d,%d",
	&year[count], &month[count], &day[count], &ticketType[count], &calYear[count], &ticketNum[count], &advantage[count], &totalPay[count]) != -1 )
	{
	count++; 
	}
	fclose(fp);
	
	for(int index=0; index<count; index++)
	{
	printf("%d��\t%d��\t%d��\t %d\t%d��\t %d��\t   %d\t      %d��\n",
	year[index], month[index], day[index], ticketType[index], calYear[index], ticketNum[index], advantage[index], totalPay[index]);
	}
	
	printf("======================================================================\n\n");

	printf("===========================���� �� �Ǹ���Ȳ===========================\n\n");
	
	for(int i=0; i<count; i++)
	{
		if(ticketType[i] == 1) 
		{
			sumTicketnum[i] += ticketNum[i];
		}
		else
		{
			sumTicketnum[i] += ticketNum[i];
	
		}
	}
		printf("�ְ��� �� %d��\n", sumTicketnum[1]);
		
	return 0;
}

