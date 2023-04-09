/*
Accept character from user and check whether it is
Capital or not
*/

#include<stdio.h>
#include<stdbool.h>

bool CheckCapital(char ch1)
{
	
	if((ch1 >= 'A') && (ch1 <= 'Z'))
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
	 
	bRet = CheckCapital(ch);
	 
	if(bRet == true)
	{
		printf("its is Capital Alphabet");
	}
	else
	{
		printf("its is not capital alphabet");
	} 
	 
	return 0;
}
