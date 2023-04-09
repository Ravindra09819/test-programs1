// Write a program which accept number from user amd count frequency of 4 in it

// input = 9242
// output = 1

#include<stdio.h>

int CountFour(int iNo)
{
    int iDigit=0;
    int iCnt=0;

    while(iNo>0)
    {
       iDigit=iNo%10;

       if(iDigit==4)
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

    iRet=CountFour(iValue);
    printf("%d",iRet);

    return 0;
}
