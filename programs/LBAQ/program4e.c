
//write a program which accept number from user and return differencee between summation of all its factors and non factors.

#include<stdio.h>

int FactDiff(int iNo)
{
int  iCnt=0;

int iAns=0;


for(iCnt=1;iCnt<=iNo/2;iCnt++)
{
if(iNo%iCnt==0)
{
iAns=iAns+iCnt;
}


}
return iAns;
}
int NonFact(int iNo)
{
int iCnt=0;
int iAns=0;
for(iCnt=2;iCnt<=iNo;iCnt++)
{
if(iNo%iCnt!=0)
{
iAns=iAns+iCnt;
}
}
return iAns;
}

int Difference(int iNo1)
{
int iResult=0;
iResult=FactDiff(iNo1)-NonFact(iNo1);
return iResult;
}






int main()
{
int iValue=0;
int iRet=0;
printf("Enter number");
scanf("%d",&iValue);

iRet=Difference(iValue);
printf("%d",iRet);
return 0;
}

