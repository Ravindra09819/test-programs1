//input:4


//output:  4  3  2  1  1  2  3  4
#include<stdio.h>
void Display(int iNo)
{
int iCnt=0;
int ino=0;

for(iCnt=iNo;iCnt>0;iCnt--)
{
printf("%d\t",iCnt);

}
for(iCnt=1;iCnt<=iNo;iCnt++)
{
printf("%d\t",iCnt);
}

}




int main()
{
int iValue=0;
printf("please enter values\n");
scanf("%d",&iValue);
Display(iValue);

return 0;
}
