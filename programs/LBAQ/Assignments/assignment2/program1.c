// Accept one number fro user and print that number of * on screen

#include<stdio.h>

void Display(int iNo)
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

    printf("Enter number:");
    scanf("%d",&iValue1);

    Display(iValue1);
    return 0;
}
