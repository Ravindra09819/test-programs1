/*
Accept character from user.If it is a  capitaal then
display all the characters from  the input till Z. If 
input character is small then print all the character 
in reverse order tilll a.In other case return directly 
*/


#include<stdio.h>

void Display(char ch)
{
	int iCnt = 0;
   while(ch != '\0')
   {
   	  if(ch >= 'A' && ch < 'Z')
   	  {
   	  	ch = ch + 1;
   	    printf(" %c ",ch);	
	  }
   }
   ch++;
}

int main()
{
	char cValue = '\0';
	
	printf("Enter Your character :");
	scanf("%c", &cValue);
	
	Display(cValue);
	
	return 0;	
}
