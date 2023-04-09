// Accept one number fro user and print that number of * on screen

#include<stdio.h>

void Accept(int iNo)
{
    int iCnt=0;
    for(iCnt=0;iCnt<iNo;iCnt++)
    {
        printf("*\n");
    }
}

int main()
{
    int iValue1=0;
    iValue1=5;

    // printf("Enter number:");
    // scanf("%d",&iValue1);

    Accept(iValue1);
    return 0;
}
