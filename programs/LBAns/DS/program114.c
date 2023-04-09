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
typedef struct node* PNODE;
typedef struct node** PPNODE;

//struct node NODE
//struct node* PNODE
//struct node** PPNODE
int main()
{
// static memory allocation
NODE obj;

//dynamic memory allocation
PNODE ptr = (PNODE)malloc(sizeof(NODE));


//direct accessing operator.
obj.data=11;
obj.next=NULL;

//indirect accessing operator->
ptr->data=11;
ptr->next=NULL;


return 0;

}
