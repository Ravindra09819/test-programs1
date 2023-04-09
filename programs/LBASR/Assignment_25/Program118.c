/*
Accept the string from user and toggle the
case of that string
*/


#include<stdio.h>

void strtoggleX(char str[])
{
	int iCnt = 0;
	
	while(*str != '\0')
	{
		if((*str >= 'A') && (*str <= 'Z'))
		  {
		     *str = *str + 32;	
		  }
		  
		else if((*str >= 'a') && (*str <= 'z')) 
		   {
              *str = *str - 32;		   	
		   }
		    
        str++;
	}
}

int main()
{
	char arr[20];
	
	printf("Enter string");
	scanf("%[^'\n']s",arr);
	
	strtoggleX(arr);
	
	printf("Modified string is %s",arr);
	
    return 0;
}

//Accept string from user 
