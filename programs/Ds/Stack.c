 /* Stack implementation using static array */
#include<stdio.h>
#include<stdlib.h>
#define CAPACITY 5//pre-processor micro
int stack[CAPACITY],top=-1,item;
void push(int);
int pop(void);
int isFull(void);
int isEmpty(void);
void traverse(void);
void peek(void);
void main()
{
    int ch;
    while(1)
{
    printf("1.push \n");
     printf("2.pop \n");
   printf("3.peek \n");
     printf("4.Traverse \n");
   printf("5.Quit \n");

     printf("Enter your choice:");
     scanf("%d",&ch);

     switch(ch)
     {
         case 1:printf("Enter element :");
         scanf("%d",&item);
         push(item);
         break;
         case 2:item=pop();
         if(item==0)
         {
             printf("stack is underflow\n");
         }
             else
             {
                 printf("poped item:%d\n",item);
             }
         
         break;
         case 3:peek();
            break;
         case 4:traverse();
         break;
         case 5:exit(0);
         default:
         printf("invalid input \n \n");
     }
     }
}
    


void push(int ele )
{
    if(isFull())
    {
printf("stack is overflow\n");
    }
    else
    {
top++;
 stack[top]=ele;
 printf("%d pushed \n",ele);
    }
}
int isFull()
{
    if(top==CAPACITY-1)
    {
return 1;
    }
    else
    {
return 0;
    }
}

int pop()
{
    if(isEmpty())
    {
        
        return 0;
    }
    else
    {
        return stack[top--];
        
    }
}

int isEmpty()
{
    if(top==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void peek()
{
    if(isEmpty())
    {
        printf("stack is empty\n");

    }
    else
    {
printf("peek element: %d \n",stack[top]);
    }
}

void traverse()
{
    if(isEmpty())
    {
        printf("stack is empty \n");
    }
    else
    {
        int i;
        printf("stack element :\n");
        for(i=0;i<=top;i++)
        {
            printf("%d \n",stack[i]);
        }
    }
}