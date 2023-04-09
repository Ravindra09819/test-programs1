/*
write a program which accept string from user and cunt no of capital character
*/

#include<stdio.h>

int CountCapital(char str[])
{
	int iCnt = 0;
	
	while(*str != '\0')
	{
		if((*str >= 'A') && (*str <= 'Z'))
		{
			iCnt++;
		}
		str++;
	}
	return iCnt++;
}

int main()
{
	char arr[20];
	int iRet = 0;
	
	printf("Enter the string : ");
	scanf("%[^'\n']s",arr);
	
	iRet = CountCapital(arr);
	
	printf("%d",iRet);
	
	return 0;
}
