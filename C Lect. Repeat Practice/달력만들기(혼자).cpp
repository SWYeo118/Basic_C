#include <stdio.h>

int main ()
{
	int year, month;
	
	printf("찾고자 하는 연도를 입력하세요 : ");
	scanf("%d", &year);
	printf("찾고자 하는 월을 입력하세요 : ");
	scanf("%d", &month); 
	printf("일\t월\t화\t수\t목\t금\t토\n");
	for (int index =1; index <= 31; index++)
	{printf("%d\t", index);
	}
	
	return 0;
}

//
