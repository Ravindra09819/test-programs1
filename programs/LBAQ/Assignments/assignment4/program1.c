// Write a program which accept number from user and
// display its multiplication of factor

// input = 12
// output = 144  (1*2*3*4*6)

#include<stdio.h>

int MultFact(int iNo)
{
    int iCnt=0;
    int iSum=1;

    for(iCnt=1;(iCnt<=(iNo/2));iCnt++)
    {
        if((iNo%iCnt)==0)
        {
            iSum=iSum*iCnt;
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

    iRet=MultFact(iValue);
    printf("%d",iRet);

    return 0;
}
