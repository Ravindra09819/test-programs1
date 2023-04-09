/*
Accept character from user and print small if its capital
,print capital if its small , print it as it is if is not char
*/

#include<stdio.h>

void Display(char ch)
{
	if((ch >= 'A') && (ch <='Z'))
	{
		ch = ch + 32;
	    printf("%c",ch);
	}
	else if((ch >= 'a') && (ch <= 'z'))
	{
		ch = ch - 32;
	    printf("%c",ch);
	}
	else
	{
		printf("%c",ch);
	}
}

int main()
{
	char cValue = '\0';
	
	printf("Enter Your character :");
	scanf("%c", &cValue);
	
	Display(cValue);
	
	return 0;	
}
