#include <stdio.h>

int main()
{
	int index;
	for(int index=2; index<=10; index++)
	{
		if (index==3) 
			{ index = index+1;
			}
		for(int j=1; j<=9; j++)
		{
		printf("%d*%d=%d\n", index, j, index*j);	
		}
	}
	return 0;
}
