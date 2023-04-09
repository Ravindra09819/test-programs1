/*
Accept number of rows and nuber of columns from user and
display below pattern
*/

/*
INPUT: iRow = 4, iCol = 4

OUTPUT: 1   2   3   4
        1   *   *   4
        1   *   *   4
        1   2   3   4

*/



#include<stdio.h>

void Pattern(int iRow, int iCol)
{

int i = 0;
int j = 0;

	for(i = 1; i <= iRow; i++)
        	{
	    	for(j = 1; j <= iCol; j++)
	    	{
	    		if((i == 1)||(i == iRow)||(j == 1)||(j == iCol))
	    			{
					printf("  %d  ",j);
		            }
		            else
		         {
		           printf("  *  ");	
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


