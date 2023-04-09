/*
Write a program which accept string from user and check
whether it contains vowels in it or not
*/

#include<stdio.h>

int CountCapital(char str[])
{
	int iCnt = 0;
	
	while(*str != '\0')
	{
		if((*str == 'a')||(*str == 'e')||(*str == 'i')||(*str == 'o')||(*str == 'u'))
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
	
	printf("Enter string");
	scanf("%[^'\n']s",arr);
	
	iRet = CountCapital(arr);
	
	printf("%d",iRet);

    return 0;
}

