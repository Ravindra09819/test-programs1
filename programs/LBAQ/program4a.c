//write a program which accept number from user and display its multiplication of factor.

#include<stdio.h>
int MultiFactor(int iNo)
{
int iCnt = 0;
int iAns = 1;
for(iCnt=1;iCnt <=iNo/2;iCnt++)
{
if(iNo%iCnt==0)

{
iAns=iAns*iCnt;

}

}
return iAns;
}
int main()
{
int iValue=0;
int iRet=0;

printf("enter number\n");
scanf("%d",&iValue);
iRet=MultiFactor(iValue);
printf("%d",iRet);
return 0;
}

