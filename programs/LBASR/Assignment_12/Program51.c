/*
Acept number from user and display below pattern
*/

/*
INPUT: 5

OUTPUT: A B C D E
*/

#include<stdio.h>

void Pattern(int iNo)
{
	int iCnt = 0;
	char ch = '\0';
	
	for(iCnt = 1,ch = 'A'; iCnt <= iNo; iCnt++,ch++)
	{
		printf("   %c   ",ch);
	}
}

int main()
{
	int iValue = 0;
	
	printf("Enter number of elememnts:");
	scanf("%d",&iValue);
	
	Pattern(iValue);
	
	return 0;
}
