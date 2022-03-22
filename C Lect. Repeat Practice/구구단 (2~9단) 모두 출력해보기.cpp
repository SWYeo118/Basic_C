#include <stdio.h>

int main()
{
	int index;
	for(int index=2; index<=9; index++)
	{
		printf("%d´Ü\n", index);
		
		for(int j=1; j<=9; j++)
		printf("%d*%d=%d\n", index, j, index*j);	
	}
	return 0;
}
