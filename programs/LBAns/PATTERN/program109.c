//trangle 
//input: Row: 4 Col:4
/*

A 
B B 
C C C 
D D D D


/*
              for(expression;expression;expression)
              {
              expression;
              }
              all expression are optional and mu
*/


#include<stdio.h>
 
 void Display(int iRow,int iCol)
 {
 int i=0,j=0;
 char ch='\0';
 
 for(i=iRow;i>=1;i++)//outer
{
for(j=1;j<=i;j++)
{
printf("*\t");
}
 

printf("\n");
}

 for(i=2;i<=iRow;i++)//outer
{  //1    2     3
for(j=1;j<=i;j++)//inner
{
printf("*\t");
}
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


