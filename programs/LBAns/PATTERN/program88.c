//input:5


//output:-4 -3 -2 -1 
#include<stdio.h>
void Display(int iNo)
{
int iCnt=0;

for(iCnt=1;iCnt<=iNo;iCnt++)
{
if(iCnt%2==0)
{
printf("*\t");

}
else
{
printf("%d\t",iCnt);
}
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
