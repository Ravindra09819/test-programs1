/*
Accept Caracter from user and check whether it is 
special symbol or not(!,@,#,$,%,^,&,*)
*/

#include<stdio.h>
#include<stdbool.h>

bool ChkSpecial(char ch)
{
   while(ch != '\0')
   {
   	  if(ch >= 33 && ch <= 38)
   	  {
   	     return true;	
	  }
	  else
	  {
	  	return false;
	  }
   }
}

int main()
{
	char cValue = '\0';
	bool bRet = false;
	
	printf("Enter the character:");
	scanf("%c",cValue);
	
	bRet = ChkSpecial(cValue);
	
	if(bRet == true)
	{
		printf("It is a special character",cValue);
	}
	else
	{
		printf("It is not a special character",cValue);
	}
	
	return 0;
}
