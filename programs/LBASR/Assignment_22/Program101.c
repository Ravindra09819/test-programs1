/*Accept a character from user and check whether its
alphabet or not */

#include<stdio.h>
#include<stdbool.h>

bool CheckCharacter(char ch1)
{
	if(((ch1 >= 'A') && (ch1 <= 'Z')) || ((ch1 >= 'a') && (ch1 <= 'z')))
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
	 
	bRet = CheckCharacter(ch);
	 
	if(bRet == true)
	{
		printf("its is Alphabet");
	}
	else
	{
		printf("its is not alphabet");
	} 
	 
	return 0;
}
