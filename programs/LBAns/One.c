#include<stdio.h>
#include<stdbool.h>


bool checkprime(int ino)
{
int icnt=0;
bool bflag=true;

for(icnt=2;icnt<=ino/2;icnt++)
{
if(ino%icnt==0)
{
bflag=false;
break;
}
}
return bflag;

}





int main()
{
int ivalue=0;
bool bret;
printf("Enter numeber\n");
scanf("%d",&ivalue);
bret=checkprime(ivalue);
if(bret==true)
{
printf("%d is prime number\n",ivalue);
}
else
{
printf("%d is not prime number\n",ivalue);
}
return 0;
}
