#include<stdio.h>

void RangeDisplay(int iStart,int iEnd)
{
    for(int i=iStart;i<=iEnd;i++)
    {
        int n=0;
        n=i;
        int Ans=0;
        Ans=0+n;
        printf("%d",Ans);
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
