// Write a program accept number from user and return Difference between 
//     summation of even digits and summation of odd digits

//     input = 2395
//     output = -15 (2-17)

#include<stdio.h>

int SumEven(int iNo1)
{
     int iDigit=0;
    int iSum=0;

    while(iNo1>0)
    {
        iDigit=iNo1%10;
        if((iDigit%2)==0)
        {
            iSum=iSum+iDigit;

        }
        iNo1=iNo1/10;
    }
    return iSum;

}

int SumOdd(int iNo2)
{
    int iDigit=0;
    int iSum=0;

    while(iNo2>0)
    {
        iDigit=iNo2%10;
        if((iDigit%2)!=0)
        {
            iSum=iSum+iDigit;

        }
        iNo2=iNo2/10;
    }
    return iSum;    
}



int CountDiff(int iNo)
{
    int iResult=0;

    iResult=SumEven(iNo)-SumOdd(iNo);

    return iResult;
   
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number:");
    scanf("%d",&iValue);

    iRet=CountDiff(iValue);
    printf("Difference is:%d",iRet);

    return 0;
}
