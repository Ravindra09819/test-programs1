/*
Accept N numbers from user and display summation of digits 
of each number
*/

/*
INPUT: N: 6
Elements : 8225 665 3 76 953 858
OUTPUT: 17 17 3 13 17 21
*/

	
	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		while(Arr[iCnt] != 0)
		{
		
	    iDigit = Arr[iCnt] % 10;
	
     	Arr[iCnt] = Arr[iCnt] / 10;
     	
     	iSum = iSum + iDigit;
        }
	}
	return iSum;

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
	
	iRet = SummationOfDigit(p,iSize);
	
	printf("Summation of Digit is : %d", iRet);
	
	free(p);
	
	return 0;
}
