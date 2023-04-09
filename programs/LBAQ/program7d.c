// Write a program which accept number from user amd return multiplication of all digits

// input = 2395
// output = 270

#include<stdio.h>

int MultDigits(int iNo)
{
    int iDigit=0;
    int iSum=1;
    if(iNo<0)
    {
        iNo=-iNo;
    }

    while(iNo>0)
    {
       iDigit=iNo%10;
        iSum=iSum*iDigit;
       
       iNo=iNo/10;
    }
    
    return iSum;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter Number:");
    scanf("%d",&iValue);

    iRet=MultDigits(iValue);
    printf("%d",iRet);

    return 0;
}
