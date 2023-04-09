/*
  Write a progrgam which accept string from user and
  return difference between frequency of all small character 
  and frequency of ccapital character...
*/

#include<stdio.h>

int CountCapital(char str[])
{
	int iCap = 0;
	int iSam = 0;
	
	while(*str != '\0')
	{
		if((*str >= 'A' && *str <= 'Z'))
		{
		   iCap++;
        }
        else if((*str >= 'a' && *str <= 'z'))
        {
        	iSam++;
		}
        str++;
	}
	return iCap++-iSam++;
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

