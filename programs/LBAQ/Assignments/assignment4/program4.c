// Write a program which accept number from user and return summation of all its non factor

// input = 12
// output = 50   (5 7 8 9 10 11)

#include<stdio.h>

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

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number:");
    scanf("%d",&iValue);

    iRet=SumNonFact(iValue);
    printf("summation is:%d",iRet);

    return 0;
}