/*
Accept number of rows and nuber of columns from user and
display below pattern
*/

/*
INPUT: iRow = 4, iCol = 4

OUTPUT: *   *   *   *
        *   *   *   #
        *   *   #   #
        *   #   #   #
*/


#include<stdio.h>

void Pattern(int iRow, int iCol)
{

int i = 0;
int j = 0;

	for(i = 1; i <= iRow; i++)
        	{
	    	for(j = iCol; j >= 1; j--)
	    	{
	    		if(i <= j)
	    			{
					printf("  *  ");
		            }
		            else
		         {
		           printf("  #  ");	
				 }   
		         
			}
				
			printf("\n");
		    }
}
	
	int main()
{
	int iValue1 = 0; 
	int iValue2 = 0;
	
	printf("Enetr number of rows and number of columns");
	scanf("%d %d",&iValue1, &iValue2);
	
	Pattern(iValue1, iValue2);
	
	return 0;
}
