#include<stdio.h>

int Reverse(int iNo)
{
    int iDigit = 0;
    int iRev = 0;

    while(iNo > 0)//45678
    {
        iDigit = iNo % 10;//8 7 6 5 4
        printf("%d\n",iDigit);
        iRev = iRev * 10 + iDigit;//0*0+8=8,8*10+7=87, 87*10+6=876,876*10+5=8765,8765*10+4=87654
        printf("%d\t",iRev);
        iNo = iNo / 10;//4567 456 45 4 
    }

   return iRev;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = Reverse(iValue); // Reverse(7562)

    printf("Reverse number is : %d\n",iRet);

    return 0;
}

