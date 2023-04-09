#include<stdio.h>
#include<stdlib.h>
 int DisplayEven(int Arr[],int iLength)
 {
 int iCnt=0,iEcount=0;
 //printf("Even elements are:\n");
 for(iCnt=0;iCnt<iLength;iCnt++)
 {
 if(Arr[iCnt]%2==0)
 {
 
 iEcount++;
 }
 }
 return iEcount;
 }


int main()
{
 int isize=0,iRet=0;
 int *ptr=NULL;
 int iCnt=0;
 printf("Enter number of elements:\n");
 scanf("%d",&isize);
  ptr=(int *)malloc(isize*sizeof(int));
  printf("Enter the values of Array:\n");
  for(iCnt=0;iCnt<isize;iCnt++)
  {
  scanf("%d",&ptr[iCnt]);
  }
 iRet=DisplayEven(ptr,isize);
printf("Number of even elements are:%d\n",iRet);

free(ptr);
return 0;

}

