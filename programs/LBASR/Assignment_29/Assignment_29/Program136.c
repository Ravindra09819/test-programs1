#include<stdio.h>
#include<stdbool.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    UINT iMask=0x00004000;
    UINT iResult=0;

    iResult=iNo & iMask;

    if(iResult==0)
    {
        return FALSE;
    }
    else
    {
        return TRUE;
    }
}
int main()
{
    UINT ivalue=0;
    BOOL bret=FALSE;
    printf("enter number\n");
    scanf("%d",&ivalue);
    bret=ChkBit(ivalue);
    if(bret==TRUE)
    {
        printf("Bit is on");
    }
    else
    {
        printf("Bit is Off");
    }
    return 0;
}