
//write a program which accept number from user and display all its non factors

#include<stdio.h>
int SumnonFact(int iNo)
{
int iCnt=0;
for(iCnt=1;iCnt<=iNo;iCnt++)
{
if(iNo%iCnt!=0)
{
printf("%d ",iCnt);
}
}
return iCnt;
}
int main()
{
int iValue=0;
int iRet=0;
printf("\nEnter number:");
scanf("%d",&iValue);
iRet=SumnonFact(iValue);
return 0;

}
