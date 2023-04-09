#include<stdio.h>

// Input : 7856
// Output :
// 6
// 5
// 8
// 7

void DisplayDigits(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;//6 5 8 7
        printf("%d\n",iDigit);//6
        iNo = iNo /10;//785 78 7
        
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    DisplayDigits(iValue);  // DiplsayDigits(-721);

    return 0;
}






/*

iNo = 98675


















*/

























