// Accept number from user and check wheather number is even or odd

#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL CheckEven(int iNo)
{
    if((iNo%2)==0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}


int main()
{
    int ivalue=0;
    BOOL bRet=FALSE;

    printf("Enter number:");
    scanf("%d",&ivalue);

    bRet=CheckEven(ivalue);

    if(bRet==TRUE)
    {
        printf("Number is even.");
    }
    else
    {
        printf("Number is Odd");
    }
    
    return 0;
}
