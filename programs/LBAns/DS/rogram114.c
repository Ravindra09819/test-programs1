// Data Structure start from here

#include<stdio.h>
#include<stdlib.h>
//structure declaration
struct node
{
int data;         //4
struct node*next;//8
};


typedef struct node NODE;
int main()
{
// static memory allocation
NODE obj;

//dynamic memory allocation
NODE *ptr = (NODE*)malloc(sizeof(NODE));


//direct accessing operator.
obj.data=11;
obj.next=NULL;

//indirect accessing operator->
ptr->data=11;
ptr->next=NULL;


return 0;

}
