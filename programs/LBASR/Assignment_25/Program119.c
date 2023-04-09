/*
Write a program which accept string from user and display
only difgits from that string
*/

#include<stdio.h>

void DisplayDigit(char *str)
{
	int iCnt = 0;
	
	while(*str != '\0')
	{
		if((*str >= 0) && (*str <= 9))
		  {
		     printf("%d");	
		  }
		   str++;
	}
}

int main()
{
	char arr[20];
	
	printf("Enter string");
	scanf("%[^'\n']s",arr);
	
	DisplayDigit(arr);
	
    return 0;
}

