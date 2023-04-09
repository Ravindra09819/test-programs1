// Write a program which accept number from user and
//     display the factor in decreasing order

//     input = 12
//     outout = 6 4 3 2 1

#include<stdio.h>

void FactRev(int iNo)
{
    int iCnt=0;
    for(iCnt=(iNo/2);iCnt>0;iCnt--)
    {
        if((iNo%iCnt)==0)
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

    FactRev(iValue);
    return 0;

}
