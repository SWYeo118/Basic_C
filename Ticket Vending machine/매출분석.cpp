
#include <stdio.h>
#include <time.h>

int main()
{

	const int MAX = 100;
	int count = 0;
	int year[MAX], month[MAX], day[MAX], ticketType[MAX], calYear[MAX], ticketNum[MAX], advantage[MAX], totalPay[MAX];
	int sumTicketnum[MAX];

	printf("=============================매출분석내역=============================\n\n");
	printf("연도\t월\t일\t권종\t나이\t수량\t우대사항\t금액\n");
	
	FILE *fp = fopen("report.csv", "r+"); 

	while(fscanf(fp, "%d,%d,%d,%d,%d,%d,%d,%d",
	&year[count], &month[count], &day[count], &ticketType[count], &calYear[count], &ticketNum[count], &advantage[count], &totalPay[count]) != -1 )
	{
	count++; 
	}
	fclose(fp);
	
	for(int index=0; index<count; index++)
	{
	printf("%d년\t%d월\t%d일\t %d\t%d세\t %d장\t   %d\t      %d원\n",
	year[index], month[index], day[index], ticketType[index], calYear[index], ticketNum[index], advantage[index], totalPay[index]);
	}
	
	printf("======================================================================\n\n");

	printf("===========================권종 별 판매현황===========================\n\n");
	
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
		printf("주간권 총 %d매\n", sumTicketnum[1]);
		
	return 0;
}

