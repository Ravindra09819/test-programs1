/*
* * * * * *
* * $ $ $ *
* & * $ $ *   
* & & * $ *
* & & & * *
* * * * * *
*/
#include<stdio.h>
 
 Display(int iRow,int iCol)
 {
 int i=0,j=0;
 
 for(i=1;i<=iRow;i++)//outer
{  //1    2     3
for(j=1;j<=iCol;j++)//inner
{
if((i==1)||(i==iRow)||(j==1)||(j==iCol)||(i==j))
{
printf("*\t");
}
 else 
 {
 if(i>j)
{
printf("&\t");
}
else if(i<j)
{
 
printf("$\t");
}
}
}
 printf("\n");
}
}


 
 
 int main()
 {
 int iValue1=0,iValue2=0;
 printf("Enter Row number\n");
 scanf("%d",&iValue1);
 
 printf("Enter Col number\n");
 scanf("%d",&iValue2);
 Display(iValue1,iValue2);
 return 0;
 }


