/*
Accept N numbeers from user and return the difference
between largest and smallest number
*/

/*
INPUT: 6
NO:  66
ELEMENTS : 85 66 3 66 93 88
OUTPUT : 90 (93-3)

*/

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iLength)
{
	int iLargest = 0;
	int iSmallest = Arr[0];
	int iCnt = 0;
	
	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		if(iLargest < Arr[iCnt])
		{
			iLargest = Arr[iCnt];
	    }
	    else if(iSmallest > Arr[iCnt])
	    {
	    	iSmallest = Arr[iCnt];
		}
	}
	return iLargest - iSmallest;
}


int main()
{
	int iSize = 0;
	int iRet = 0;
	int iCnt = 0;
	int *p = NULL;
	
	printf("Enter number of elements:");
	scanf("%d",&iSize);
	
	p = (int*) malloc (iSize * sizeof(int));
	
	if(p == NULL)
	{
		printf("Unable to allocate memory");
		return -1;
	} 
	
	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		printf("Enter Elements %d : ",iCnt + 1);
		scanf("%d",&p[iCnt]);
	} 
	
	iRet = Difference(p,iSize);
	
	printf("Difference is : %d", iRet);
	
	free(p);
	
	return 0;
}
