#include<iostream>
using namespace std;

struct  node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

class SinglyCLL
{
    private:        //characteristics
        PNODE Head;
        PNODE Tail;
        int count;

    public:     //behaviour
        SinglyCLL();

        void InsertFirst(int no);
        
        void InsertLast(int no);
        
        void InsertAtPos(int no,int pos);
        
        void DeleteFirst();
       
        void DeleteLast();
        
        void DeleteAtPos(int pos);
        
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

            if((Head==NULL)&&(Tail==NULL))      //if ll empty
            {
                Head=newn;
                Tail=newn;
                
            }
            else        // ll contain at least one node
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

            if((Head==NULL)&&(Tail==NULL))      //if ll empty
            {
                Head=newn;
                Tail=newn;
                
            }
            else        // ll contain at least one node
            {
                Tail->next=newn;
                Tail=newn;

            }
            Tail->next=Head;

        }
        
        void SinglyCLL::InsertAtPos(int no,int pos)
        {

        }
        
        void SinglyCLL::DeleteFirst()
        {

        }
       
        void SinglyCLL::DeleteLast()
        {

        }
        
        void SinglyCLL::DeleteAtPos(int pos)
        {

        }
        
        void SinglyCLL::Display()
        {
            PNODE temp=Head;

            if(Head==NULL && Tail==NULL)
            {
                return;
            }

            do
            {
                cout<<"|"<<temp->data<<"|";
                temp=temp->next;

            }
            while(temp !=Head);
            

        }
        
        int SinglyCLL::Count()
        {
            PNODE temp=Head;
            int count=0;

            if(Head==NULL && Tail==NULL)
            {
                return 0;
            }

            do
            {
                count++;
                temp=temp->next;

            }
            while(temp !=Head);

            return count;
        }

int main()
{
    SinglyCLL obj;
    int iret=0;

    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);

    obj.InsertLast(101);
    obj.InsertLast(111);

    obj.InsertLast(121);
    obj.InsertLast(151);
    obj.InsertLast(201);

    obj.Display();

    iret=obj.Count();
    cout<<"number of nodes are:"<<iret;



    return 0;
}