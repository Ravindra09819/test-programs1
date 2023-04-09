// Write a program which accept number from user and return difference between summation of all its factors nd non factors

// input = 12
// output = 34   

#include<stdio.h>

int SumFact(int iNo)
{
    int iCnt=0;
    int iSum=0;
    for(iCnt=1;iCnt<iNo;iCnt++)
    {
        if((iNo%iCnt)==0)
        {
            iSum=iSum+iCnt;
            
        }
    }
    return iSum;

}

int SumNonFact(int iNo)
{
    int iCnt=0;
    int iSum=0;
    for(iCnt=2;iCnt<iNo;iCnt++)
    {
        if((iNo%iCnt)!=0)
        {
            iSum=iSum+iCnt;
            
        }
    }
    return iSum;
}

int Difference(int iNo1)
{
    int iResult=0;
    iResult=SumFact(iNo1)-SumNonFact(iNo1);
    

    return iResult;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number:");
    scanf("%d",&iValue);

    iRet=Difference(iValue);
    printf("summation is:%d",iRet);

    return 0;
}
