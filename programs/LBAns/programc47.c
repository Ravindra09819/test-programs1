#include<stdio.h>
#include<stdbool.h>
int CheckPalindrome(int ino)
{
int iDigit=0;
int iRev=0;
int iTemp=0;
if(ino<0)
{
ino=-ino;
}
iTemp=ino;
while(ino>0)
{
iDigit=ino%10;
ino=ino/10;
}
if(iRev==iTemp)
{
return true;
}
else
{
return false;
}

}
int main()
{
int ivalue=0;
int iret=0;
bool bRet;
printf("enter number\n");
scanf("%d\n",&ivalue);

bRet=CheckPalindrome(ivalue);
if(bRet==true)
{
printf("%d is palindrome number\n",ivalue);
}
else
{
printf("%d is notpalindrome  number \n",ivalue);
}
return 0;
}


