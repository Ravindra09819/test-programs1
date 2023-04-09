#include<stdio.h>
void Display(int iNo1,int iNo2)
{
    int i=0,j=0;
 for(i=1;i<=iNo1;i++)
 {
     
for(j=1;j<=iNo2;j++)
{
printf("%d\t",(j*i));
 }
 printf("\n");
}
}


int main()
{
    int ivalue1=0,ivalue2=0;
    printf("enter the first number:\n");
    scanf("%d",&ivalue1);
    printf("enter second number:\n");
    scanf("%d",&ivalue2);
    Display(ivalue1,ivalue2);
    return 0;
}