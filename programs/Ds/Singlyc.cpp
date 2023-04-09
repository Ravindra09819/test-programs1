#include<iostream>
using namespace std;


struct node
{
int data;
struct node *next;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct bode **PPNODE;


class SinglyCLL
{
private:          //characteristics
PNODE Head;
PNODE Tail;


public:     //Behaviours
SinglyCLL();
void InsertFirst(int no);
void InsertLast(int no);
void InsertAtPos(int no,int pos);
void DeleteFirst();
void DeleteLast();
void DeleteAtPos(int ipos);
void Display();
int Count();
};


SinglyCLL::SinglyCLL()
{
Head=NULL;
Tail=NULL;
}

void SinglyCLL::InsertFirst(int no)
{

PNODE newn=NULL;

newn=new NODE;

newn->data=no;
newn->next=NULL;



if((Head==NULL)&&(Tail==NULL))// If LL is empty
{
Head=newn;
Tail=newn;
}
else// If LL constains atleast one node
{
newn->next=Head;
Head=newn;
}
Tail->next=Head;
}

void SinglyCLL::InsertLast(int no)
{
PNODE newn=NULL;
newn=new NODE;

newn->data=no;
newn->next=NULL;

if((Head==NULL)&&(Tail==NULL))//if ll is empty
{
Head=newn;
Tail=newn;
}
else
{
Tail->next=newn;
Tail=newn;
}
Tail->next=Head;
}

void SinglyCLL::INsertAtPos(int no,int ipos)
{
int iSize=Count();

if((ipos<1)||(ipos>iSize+1))
{
cout<<"Invalid position\n";
return;
}

if(ipos==1)
{
InsertFirst(no);
}
else if(ipos==iSize+1)
{
InsertLast(no);
}
else
{
PNODE newn=NULL;

newn=new NODE;

newn->data=no;
newn->next=NULL;
PNODE temp=Head;

int iCnt=0;

for(iCnt=1;iCnt<ipos-1;iCnt++)
{
temp=temp->next;
}

newn->next=temp->next;
temp->next=newn;
}
}

void SinglyCLL::DeleteFirst()
{
if(Head==NULL&&Tail==NULL)
{
return;
}
else if(Head==Tail)
{
delete Head;
Head=NULL;
Tail=NULL;
}
else
{
PNODE temp=Head;

while(temp->next!=Tail)
{
temp=temp->next;
}

}

delete9







