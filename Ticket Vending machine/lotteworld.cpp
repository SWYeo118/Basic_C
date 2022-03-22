
#include <stdio.h>
#include <time.h>

int main()
{

// index에 값을 할당하는 과정이 필요하다. 



	time_t t = time(NULL);
	struct tm tm = *localtime(&t);
	
	int proceed;
	int index = 0, sumPay = 0;
	int ticketType[10] = {0,}, ticketNum[10] = {0,}, advantage[10] = {0,}, totalPay[10] = {0,}, citizenNum[10] = {0,}, year[10] = {0,}, numBack[10] = {0,}, calYear[10] = {0,}, norPay[10] = {0,};
	int month[10] = {0,}, day[10] = {0,}, gap[10] = {0,};
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
	{ //index 0
	
	int ticketType[10] = {index};
	
	printf("%18s %d년 %d월 %d일 %02d:%02d:%02d\n\n", "현재시각 :",tm.tm_year+1900, tm.tm_mon+1, tm.tm_mday, tm.tm_hour, tm.tm_min, tm.tm_sec);
	printf("v 놀이공원 티켓 발권 서비스에 오신 것을 환영합니다.\n\n");
	printf("발권하실 권종을 선택하세요\n1.주간권\n2.야간권\n");
	scanf("%d", &ticketType[index]); 
	if (!(ticketType[index] == 1 || ticketType[index] == 2 ))
	{for(;;)
		{
		printf("권종을 잘못 선택하셨습니다. 다시 선택하세요\n1.주간권\n2.야간권\n");
		scanf("%d", &ticketType[index]); 
		if ((ticketType[index] == 1 || ticketType[index] == 2 ))
			break;
		}
	}
	printf("연령 확인을 위해 주민등록번호 앞자리와 뒷 자리 한자리를 입력하세요(ex 930118-1)\n");
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
		printf("만 %d세 입니다.\n",calYear[index]); 
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
			
	printf("티켓 몇 장을 발권하시겠습니까?\n");
	scanf("%d", &ticketNum[index]);
	printf("우대사항을 선택하세요\n");
	printf("1. 없음\n2. 장애인\n3. 국가유공자\n4. 휴가장병\n5. 임산부\n6. 다둥이 행복카드\n");
	scanf("%d", &advantage[index]);
if (!(advantage[index] == 1 || advantage[index] == 2 || advantage[index] == 3 || advantage[index] == 4 || advantage[index] == 5 || advantage[index] == 6 ))
	{for(;;)
		{
		printf("우대사항을 잘못 선택하셨습니다. 다시 선택하세요\n1. 없음\n2. 장애인\n3. 국가유공자\n4. 휴가장병\n5. 임산부\n6. 다둥이 행복카드\n");
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
	printf("총 티켓 가격은 %d 원 입니다.\n계속해서 발권을 진행하시겠습니까? 1.예/2.아니오\n", totalPay[index]);
	scanf("%1d", &proceed);  //여기까지 index 값 = 0
	index++;	//이 아래부터 index 값 = 1
	}
	while(proceed<=1);
	
	printf("이용해주셔서 감사합니다.\n\n");
	printf("===============결제내역==============\n");

	for(int i = 1; i<=index;i++)
	{
		if ((ticketType[index-1] == 1)){
		printf("주간권 ");}
		else{
		printf("야간권 ");
		}
		if(calYear[index]<3)
			{
				printf("유아 ");
			}
			else if (calYear[index]<12)
			{
				printf("어린이 ");
			}
			else if (calYear[index]<=18)
			{
				printf("청소년 ");
			}
			else if (calYear[index]<65)
			{
				printf("성인 ");
			}
			else
			{
				printf("장년 ");
			}
		printf("x %d 장 ", ticketNum[index-1]);
		printf("금액 : %d 원\n", totalPay[i-1]);
		sumPay += totalPay[i-1];
		
	}
	
	printf("총 결제 금액 : %d 원\n", sumPay);
	// 한 번 발권을 하고 그 값을 index에 저장한 다음, 다음번 발권에서 변경된 index로 함께 값을 출력해서 합계를 완성 



	return 0;
}

/*
종일 
어른59,000원
청소년52,000원 
어린이47,000원
베이비15,000원

야간권 
어른56,000원
청소년50,000원
어린이46,000원 
베이비15,000원

- 베이비
1) 0~12개월 미만 : 파크 입장 및 유아 놀이시설(키즈토리아 등) 무료 이용
2) 12개월 이상 36개월 미만 : 파크 입장 무료(단, 단체 입장객 제외), 유아 놀이시설 이용은 유료로 이용 가능

- 36개월 이상 ~ 만 12세 : 어린이 요금 적용

- 만 13세 이상 ~ 만 18세 : 청소년 요금 적용(학교 및 학년 무관)

- 만 65세 이상 : 어린이 요금 적용(기타 우대 적용불가)


*/
