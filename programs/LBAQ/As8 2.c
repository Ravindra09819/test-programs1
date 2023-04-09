#include<stdio.h>

void RangeDisplay(int iStart,int iEnd)
{
    for(int i=iStart;i<=iEnd;i++)
    {
     if(i%2==0)
     printf("%d\t",i);
    }
}



int main()
{
    int iValue1=0,iValue2=0;
      printf("Enter Starting point:\n");
     scanf("%d",&iValue1);
     printf("Enter ending point:\n");
    scanf("%d",&iValue2);
RangeDisplay(iValue1, iValue2);
return 0;
}
