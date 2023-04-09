#include<stdio.h>
#include<stdlib.h>//for malloc and free

void Display(int Arr[],int iLength)
{
int iCnt = 0;
 printf("Elements of array are:\n");
 //    1       2      3
  for(iCnt=0;iCnt<iLength;iCnt++)
  {
  printf("%d\n",Arr[iCnt]);// 4

  }
  
}

int main()
{
 //auto int Brr[5]; static memory allocation
 int *ptr = NULL;
 
 register int iCnt=0;
 int isize=0;
 printf("Enter the number of Elements\n");
 scanf("%d",&isize);
 
 ptr=(int *)malloc(isize*sizeof(int));
  printf("Enter Elements:\n");
  for(iCnt=0;iCnt<isize;iCnt++)
  {
  
  scanf("%d",&ptr[iCnt]);
  }
  
  
  Display(ptr,isize);//Dispaly 100
  free(ptr);
 return 0;
}






