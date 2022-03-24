
#include <stdio.h>

int add(int a, int b)
{
	int cal;
	cal = a+b;
	return cal;	
}
int minus(int a, int b)
{
	int minus;
	minus = a-b;
	return minus;	
}
int multi(int a, int b)
{
	int multi;
	multi = a*b;
	return multi;	
}
float division(float a, float b)
{
	float division;
	division = a/b;
	return division;	
}

int dual(int a, int b)
{
	int result = 1;
	for(int index=0; index <b; index++)
	{ result *= a;
	}
	
	return result;	
}



int main()
{	
	int returnData1;
	returnData1 = add(15,25);
	printf("%d\n", returnData1);
	
	int returnData2;
	returnData2 = minus(35,25);
	printf("%d\n", returnData2);
	
	int returnData3;
	returnData3 = multi(15,25);
	printf("%d\n", returnData3);
	
	float returnData4;
	returnData4 = division(50,25);
	printf("%f\n", returnData4);
	
	int returnData5;
	returnData5 = dual(15,0);
	printf("%d\n", returnData5);

	
	return 0;
}

