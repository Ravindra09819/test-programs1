/*
Write a program which accept string from user
and count no of small characters.
*/

/*
write a program which accept string from user and count no of small character
*/

#include<stdio.h>

int CountCapital(char str[])
{
	int iCnt = 0;
	
	while(*str != '\0')
	{	
		   if((*str >= 'a') && (*str <= 'z'))
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
