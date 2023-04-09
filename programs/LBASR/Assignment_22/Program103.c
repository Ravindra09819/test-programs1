/*
Accept character from user and check its digit or not
*/

#include<stdio.h>
#include<stdbool.h>

bool CheckDigit(char ch1)
{
	
	if((ch1 >= '0') && (ch1 <= '9'))
      {
        return true;
	  }
	  else
	  {
	  	return false;
	  }
}

int main()
{
	char ch = '\0';
	bool bRet = 0;
	
	 printf("Enter a character:");
	 scanf("%c",&ch);
	 
	bRet = CheckDigit(ch);
	 
	if(bRet == true)
	{
		printf("its is a Digit");
	}
	else
	{
		printf("its is not a Digit");
	} 
	 
	return 0;
}
