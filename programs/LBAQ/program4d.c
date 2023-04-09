//write a program which accept number from user and return summation of all its non factor.
#include<stdio.h>
int SumnonFact(int iNo)
{
int iCnt=0;
int iAns=0;
for(iCnt=1;iCnt<=iNo;iCnt++)
{
if(iNo%iCnt!=0)
{
iAns=iAns+iCnt;
}
}
return iAns;
}

int main()
{
int iValue=0;
int iRet=0;

printf("Enter number\n");
scanf("%d",&iValue);
iRet=SumnonFact(iValue);
printf("output :%d",iRet);

return 0;
}

