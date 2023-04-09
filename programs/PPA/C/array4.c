#include<stdio.h>
///////////////////////////
//
//Function name:   Addition
//Input:         Two input
//Output:   Integer
//Description :   it is used to perform Addition
//Author :    Ravindra Kambale
//Date :     06/03/2022
//
//////////////////////////////
int Addition(int iNo1,int iNo2)
{
 auto int iAns=0;
iAns=iNo1+iNo2;
return iAns;

}

///////////////////////////////
// Entry point function of addition application
////////////////////////////

int main()
{
	auto int iValue1  = 0,iValue2  = 0;
	auto int iRet=0;
	
	printf("Enter First Number\n");
	scanf("%d",&iValue1);
	
	printf("Enter Second Number\n");
	scanf("%d",&iValue2);
	
	iRet=Addition(iValue1,iValue2);
	printf("Addition is:%d\n",iRet);

    return 0;
}









