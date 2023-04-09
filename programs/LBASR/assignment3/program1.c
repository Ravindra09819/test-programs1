// write program which accept one number from user and print
// that number of even numbers on screen

// input= 7
// output= 2 4 6 8 10 12 14

#include<stdio.h>

void PrintEven(int iNo1)
{
    int iCnt=0;

    if(iNo1<=0)
    {
        return;
    }

    for(iCnt=2;(iCnt<=(iNo1*2));iCnt++)
    {
        if(iCnt%2==0)
        {
            printf("%d\n",iCnt);
        }

    }



}

int main()
{
    int iValue=0;

    printf("Enter the number:");
    scanf("%d",&iValue);

    PrintEven(iValue);
    return 0;
}