/*
Accept a character from user and check whether
it is small case or uppercase
*/

#include<stdio.h>
#include<stdbool.h>

bool CheckScX(char ch1)
{
	
	if((ch1 >= 'a') && (ch1 <= 'z'))
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
	 
	bRet = CheckScX(ch);
	 
	if(bRet == true)
	{
		printf("its is a smmallcase character",ch);
	}
	else
	{
		printf("its is a not smallcase case",ch);
	} 
	 
	return 0;
}
