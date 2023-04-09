// Write a program which accept number from user amd count frequency of such digit which are less than 6

// input = 9242
// output = 3

#include<stdio.h>

int Count(int iNo)
{
    int iDigit=0;
    int iCnt=0;

    while(iNo>0)
    {
       iDigit=iNo%10;

       if(iDigit<6)
       {
           iCnt++;

       }
       iNo=iNo/10;
    }
    
    return iCnt;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter Number:");
    scanf("%d",&iValue);

    iRet=Count(iValue);
    printf("%d",iRet);

    return 0;
}
