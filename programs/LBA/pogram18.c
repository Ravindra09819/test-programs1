// Write a program which accept number from user and display all its non factors

// input = 12
// output = 5 7 8 9 10 11

#include<stdio.h>

void NonFact(int iNo)
{
    int iCnt=0;
    for(iCnt=2;iCnt<iNo;iCnt++)
    {
        if((iNo%iCnt)!=0)
        {
            printf("%d\t",iCnt);
        }
    }

}

int main()
{
    int iValue=0;

    printf("Enter number:");
    scanf("%d",&iValue);

    NonFact(iValue);

    return 0;
}
