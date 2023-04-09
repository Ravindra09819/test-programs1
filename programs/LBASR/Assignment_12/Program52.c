/*
Acept number from user and display below pattern
*/

/*
INPUT: 5

OUTPUT: 5 # 4 # 3 # 2 # 1
*/

#include<stdio.h>

void Pattern(int iNo)
{
	int iCnt = 0;
	
	for(iCnt = iNo; iCnt >=1; iCnt--)
	{
		printf(" %d #",iCnt);
	}
}

int main()
{
	int iValue = 0;
	
	printf("Enter the no of elements: ");
	scanf("%d", &iValue);
	
	Pattern(iValue);
	
	return 0;
}
