/*
Accept number of rows and number of columns 
from user and display below pattern
*/

/*
INPUT: iRow = 4 iCol = 4

OUTPUT: A B C D
        A B C D
        A B C D
        A B C D
*/

#include<stdio.h>

void Display(int iRow, int iCol)
{
	int i = 0;
	int j = 0;
	char ch = '\0';
	
	for(i = 1; i <= iRow; i++)
	  {
	    for(j = 1,ch = 'A'; j <= iCol; j++,ch++)
	      {
		    printf("  %c  ",ch);
	      }
        	printf("\n");
      }
}

int main()
{
	int iValue1 = 0;
	int iValue2 = 0;
	
	printf("Enter no of rows and cols");
	scanf("%d %d",&iValue1,&iValue2);
	
	Display(iValue1,iValue2);
	
	return 0;
}
