/*
Acept number from user and display below pattern
*/

/*
INPUT: 16

OUTPUT: 2  4  6  8  10 12 14 16
*/

#include<stdio.h>

void Pattern(int iNo)
{
	int iCnt = 0;
	
	for(iCnt = 1; iCnt<= iNo; iCnt++)
	{
		if(iCnt % 2 == 0)
		{
			printf(" %d ",iCnt);
		}
	}
	
}

int main()
{
	int iValue = 0;
	
	printf("Enter no of elements:");
	scanf("%d",&iValue);
	
	Pattern(iValue);
	
	return 0;
}
