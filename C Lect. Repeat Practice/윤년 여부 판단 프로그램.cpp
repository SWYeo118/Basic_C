#include <stdio.h>

int main()
{
	
	int inputYear;
	printf("원하는 연도를 입력하세요 : ");
	scanf("%d", &inputYear);
	if (((inputYear % 4==0) && (inputYear % 100!=0) || (inputYear % 400)==0))
		{printf("%d년은 윤년입니다", inputYear);
		 } 
	else {printf("%d년은 윤년이 아닙니다", inputYear);
		 } 
	
	return 0;
	
}


// 원하는 연도를 입력하면 윤년을 확인한다?  
