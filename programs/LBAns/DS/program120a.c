#include<stdio.h>
#include<stdlib.h>

struct node
{

int data;            //4
struct node *next;    //8
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void InsertFirst(PPNODE head,int no)
{
/*
//allocate memory for node 
//initiallize that node

//check whether LL is  empty or not
//if LL is empty new then node is the first node to update its address in first pointer through head

// if LL is not empty then store the address  or first node in the next poiter of our new node
//update the first pointer through head
*/
PNODE newn=NULL;
newn=(PNODE)malloc(sizeof(NODE));

newn->data=no;
newn->next=NULL;
if(*head ==NULL) //LL is empty
{
*head=newn;
}
else //LL contains atleast one node
{
newn->next=*head;
*head=newn;
} 
}
void InsertLast(PPNODE head,int no)
{
/*
//allocate memory for node 
//initiallize that node

//check whether LL is  empty or not
// if LL is not empty then node is the first so update its adress its first

//if LL is not empty first
//update the first pointer through head
*/
PNODE newn=NULL;
PNODE temp=NULL;
newn=(PNODE)malloc(sizeof(NODE));

newn->data=no;
newn->next=NULL;
if(*head ==NULL) //LL is empty
{
*head=newn;
}
else //LL contains atleast one node
{
// code
//travel on last node
//store address of new node in the next pointer of last node
temp=*head;

while(temp->next!=NULL)
{
temp =temp->next;
}
temp->next=newn;
} 
}

void Display(PNODE head)
{
printf("Elements from linked list are :\n");
while(head!=NULL)
{
printf("% d->",head->data);
head=head->next;
}
printf("NULL\n");
}

int Count(PNODE head)
{
int iCnt=0;
while(head!=NULL)
{
iCnt++;
head=head->next;
}
return iCnt;
}

void DeleteFirst(PPNODE head)
{
//if LL is empty then return
//is LL contents atleat one node then 
//stored address of second node in the first pointer trough head
//and delete first node 
PNODE temp=NULL;
if(*head ==NULL)  //LL is  empty
{
return ;
}
else  //LL contens atleast one node
{
temp=*head;

*head=temp->next;
free(temp);
}
}

void DeleteLast(PPNODE head)
{
//if LL is empty
// if LL cotaint one node then delete that node and return 
//if LL contains more than one node then travel  on seclast node and
PNODE temp=NULL;
if(*head==NULL)
{
return;
}
else if((*head)->next==NULL) //LL contains one node
{

free(*head);
*head=NULL;
}
else //LL content more than one node
{
temp=*head;
while(temp->next->next!=NULL)
{
temp=temp->next;
}
free(temp->next);
temp->next=NULL;
}
}

void InsertAtPos(PPNODE head,int no,int pos)

{
//consider no of nodes are 4
//if position is invalid then return directly(<1 OR >4)
//if position is 1 then call deletefirst
//if position is N+1  then call DeleteLast(position is 5)
int size=0,iCnt=0;
PNODE newn=NULL;
PNODE temp=NULL;
size=Count(*head);

if((pos<1)||(pos>(size)))
{
printf("Position is invalid\n");
return;
}
if(pos==1)
{
DeleteFirst(head);
}
else if(pos==(size+1))
{
InsertLast(head,no);
}
else//logic
{

newn=(PNODE)malloc(sizeof(NODE));

newn->data=no;
newn->next=NULL;

temp=*head;
for(iCnt=1;iCnt <pos-1;iCnt++)
{
temp=temp->next;
}
newn->next=temp->next;
temp->next=newn;
}

}

void DeleteAtPos(PPNODE head,int pos)

{
//if position is invalid then return directly(<1 OR >5)
//if position is 1 then call Insertfirst
//if position is N+1  then call InsertLast(position is 5)
int size=0,iCnt=0;
PNODE newn=NULL;
PNODE temp=NULL;
size=Count(*head);

if((pos<1)||(pos>(size+1)));
{
printf("Position is invalid\n");
return;
}
if(pos==1)
{
InsertFirst(head,pos);
}
else if(pos==(size))
{
DeleteLast(PPNODE head);
}
else//logic
{



temp=*head;
for(iCnt=1;iCnt <pos-1;iCnt++)
{
temp=temp->next;
}
//tempdelete;
}
}

int main() 
{
int iRet=0;
PNODE first =NULL;
InsertFirst(&first,101);//call by address
InsertFirst(&first,51);
InsertFirst(&first,21);
InsertFirst(&first,11);

InsertAtPos(&first,75,3);
DeleteAtPos(&first,3);
Display(first);//call by value
iRet=Count(first);
printf("Number of node are : %d\n",iRet);

InsertFirst(&first,1);
Display(first);//call by value
iRet=Count(first);
printf("Number of node are : %d\n",iRet);	
InsertLast(&first,111);
InsertLast(&first,121);
Display(first); //call by value
iRet=Count(first);
printf("Number of node are : %d\n",iRet);
DeleteFirst(&first);	
Display(first); //call by value
iRet=Count(first);
printf("Number of node are : %d\n",iRet);
DeleteFirst(&first);	
Display(first); //call by value
iRet=Count(first);
printf("Number of node are : %d\n",iRet);
DeleteLast(&first);
Display(first); //call by value
iRet=Count(first);
printf("Number of node are : %d\n",iRet);
return 0;
}

