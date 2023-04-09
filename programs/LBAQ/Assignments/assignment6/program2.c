// write a program which accepts number feom user and check wheather it contains 0 in it or not

// input = 2395
// output= there is no zero

// input = 23950
// output= it contain zero

#include<stdio.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL CheckZero(int iNo)
{
    int iDigit=0;
    while (iNo>0)
    {
        iDigit=iNo%10;

        if(iDigit==0)
        {
            return TRUE;
         }
        else
        {
            return FALSE;
        }

        iNo=iNo/10;
        
    }
    
    

}

int main()
{
    int iValue=0;
    BOOL bRet=FALSE;

    printf("Enter number:");
    scanf("%d",&iValue);

    bRet=CheckZero(iValue);

    if(bRet==TRUE)
    {
        printf("it Contain zero");
    }
    else
    {
        printf("there is no zero");

    }

    return 0;
}


