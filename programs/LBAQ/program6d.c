//write a program which accept number from user and count frequency of 4 int it
#include<stdio.h>
int CountFour(int iNo)
{
int iDigit=0;
int iAns=0;

while(iNo>0)
	{
	iDigit=iNo%10;
	
	
if(iDigit==4)
{
iAns++;
}
iNo=iNo/10;
}
return iAns;
}

int main()
{
int iValue=0;
int iRet=0;
printf("enter number");
scanf("%d",&iValue);
iRet=CountFour(iValue);
printf("%d",iRet);
return 0;
}
