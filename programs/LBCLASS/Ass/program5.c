#include<stdio.h>
#include<math.h>
int conver(long  n )
{
int deci=0,i=0,rem;
while(n>0)
{
    rem=n%10;
    n=n/10;
    deci+=rem * pow(2,i);
    ++i;
}
return deci;
}



int main()
{

    long n;
    printf("Enter binary number");
    scanf("%ld",&n);

    printf("ld in binary = %ld in decimal",n);
    return 0;
}