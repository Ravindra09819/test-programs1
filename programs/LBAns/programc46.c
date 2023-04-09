#include<stdio.h>
//input 7856
//output 
//6 
//5 
//8 
//7
void DisplayDigit(int ino)
{
int iDigit =0;

if(ino<0)
{
ino=-ino;
}

while(ino>0)
{
iDigit=ino%10;
printf("%d\n",iDigit);
ino=ino/10;

printf("%d\n",ino);
}
}


int main()
{

int ivalue=0;

printf("Enter number\n");
scanf("%d",&ivalue);

DisplayDigit(ivalue);


return 0;
}





/*
iNo=98675


*/
