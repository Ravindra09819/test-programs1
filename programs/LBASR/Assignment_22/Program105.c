/*
Accept a division of student from user and depend on the the division
display exam timing .There are 4 divisions in school as A,B,C,D. Exam
of Division A at 7AM,B at 8:30 Am, C at 9:30 AM and D at 10.30 AM.
{Application should be case sensitive}
*/

#include<stdio.h>

void DisplaySchedule(char division)
{
	if(division == 'A'|| division =='a')
	{
		printf("Your exam at 7 AM");
	}
	else if(division == 'B'||division == 'b')
	{
		printf("Your exam at 8:30 AM");
	}
	else if(division == 'A'|| division == 'c')
	{
		printf("You exam at 9:30 AM");
	}
	else if(division == 'D'|| division == 'd')
	{
		printf("Your exam at 10:30 AM");
	}
    else
	{
	  return;	
	}	
}

int main()
{
	char cValue = '\0';
	
	printf("Enter Your Division :");
	scanf("%c", &cValue);
	
	DisplaySchedule(cValue);
	
	return 0;	
}
