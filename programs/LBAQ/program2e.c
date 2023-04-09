//Accept number from user and check whether number is even or odd.

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;
BOOL CheckEven(int iNo)
{
if(iNo<0)
{
iNo=-iNo;
}
if(iNo%2==0)
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
int iValue=0;
BOOL bRet=FALSE;

printf("Enter number\n");
scanf("%d",&iValue);
bRet=CheckEven(iValue);

if(bRet==TRUE)


{
printf("given number is even\n");
}
else
{
printf("given number is odd\n");
}
return 0;
}
