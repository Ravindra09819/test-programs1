/*
Accept number of rows and number of column from user and display below pattern
*/

/*
INPUT: iRow = 4  iCol = 3

OUTPUT: *   *   *
        *   *   * 
        *   *   *
        *   *   *
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
	int iCnt = 0;
	int i = 0;
	int j = 0;	
	
	for(i = 0; i < iRow; i++)
	  {
	   for(j = 0; j < iCol; j++)
	    {
	    	printf("  *  ");
     	}
     	printf("\n");
      }
}

int main()
{
	int iValue1 = 0;
	int iValue2 = 0;
	
	printf("Enter no of rows and no of columns");
	scanf("%d %d",&iValue1,&iValue2);
	
	Pattern(iValue1,iValue2);
	
   return 0;	
}        
