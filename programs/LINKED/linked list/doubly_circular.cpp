#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node* next;
    struct node* prev;
};

typedef struct node node;
typedef struct node* pnode;
typedef struct node** ppnode;

class DoublyCll
{
    private:
    pnode head;
    pnode tail;

    public:

    DoublyCll();
    void InsertFirst(int no);
    void InsertLast(int no);
    void InsertAtPos(int no, int pos);
    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int pos);
    void Display();
    int Count();
};

DoublyCll::DoublyCll()
{
    head=NULL;
    tail=NULL;
}

void DoublyCll::InsertFirst(int no)
{
    pnode newn=NULL;
    newn = new node;

    newn->data=no;
    newn->next=NULL;
    newn->prev=NULL;

    if((head==NULL)&&(tail==NULL))
    {
        head=newn;
        tail=head;
    }
    else
    {
        newn->next=head;
        head=newn;
    }
    tail->next=head;

}

void DoublyCll::InsertLast(int no)
{
    pnode newn=NULL;
    newn=new node;

    newn->data=no;
    newn->next=NULL;
    newn->prev=NULL;

    if((head==NULL)&&(tail==NULL))
    {
        head=newn;
        tail=head;
    }
    else
    {
        tail->next=newn;
        newn->prev=tail;
        tail=newn;
    }
    tail->next=head;

}

void DoublyCll::InsertAtPos(int no,int pos)
{
    pnode temp=NULL;
    int size=Count();

    if((pos<1)||(pos>(size+1)))
    {
        cout<<"invalid position"<<endl;
        return;
    }
    if(pos==1)
    {
        InsertFirst(no);
    }

    else if(pos==(size+1))
    {
        InsertLast(no);
    }
    else
    {
        pnode newn=NULL;
        newn=new node;

        newn->data=no;
        newn->next=NULL;
        newn->prev=NULL;

        pnode temp=NULL;
        temp=head;

        for(int i=1;i<(pos-1);i++)
        {
            temp=temp->next;
        }
        newn->next=temp->next;
        temp->next=newn;
        newn->next->prev=newn;
        newn->prev=temp;
    }

}

void DoublyCll::DeleteFirst()
{
    if((head==NULL)&&(tail==NULL))
    {
        return;
    }
    if(head==tail)
    {
        delete tail;
        head=NULL;
        tail=NULL;
    }
    else
    {
        head=head->next;
        delete tail->next;
        tail->next=head;      

    }
}

void DoublyCll::DeleteLast()
{
    if((head==NULL)&&(tail==NULL))
    {
        return;
    }
    if(head==tail)
    {
        delete tail;
        head=NULL;
        tail=NULL;
    }
    else
    {
        pnode temp=head;
        while(temp != head)
        {
            temp=temp->next;
        }
        delete temp->next;
        tail=temp;
        tail->next=head;
    }

}

void DoublyCll::DeleteAtPos(int pos)
{
    int size=Count();
    int cnt=0;

    if((pos<1)||(pos>size+1))
    {
        return;
    }
    if(pos==1)
    {
        DeleteFirst();
    }
    else if(pos==size+1)
    {
        DeleteLast();
    }
    else
    {
        pnode temp=head;
        pnode tempDelete=NULL;

        for(int i=1;i<pos-1;i++)
        {
            temp=temp->next;
        }
        tempDelete=temp->next;
        temp->next=tempDelete->next;
        tempDelete->next->prev=temp;
        delete tempDelete;

    }

}

int DoublyCll::Count()
{
    pnode temp=NULL;
    int cnt=0;
    if(head==NULL)
    {
        return 0;
    }
    else
    {
        temp=head;
        do
        {
            cnt++;
            temp=temp->next;
        }
        while(temp!=head);
        return cnt;
    }

}

void DoublyCll::Display()
{
    if((head==NULL)&&(tail==NULL))
    {
        cout<<"linked list is empty."<<endl;
    }
    else
    {
        pnode temp=head;
        do
        {
            cout<<"|"<<temp->data<<"|->"<<endl;
        }
        while(temp != head);
    }

}

int main()
{
    DoublyCll obj;
    int iChoice=1;

    int iValue = 0, ipos = 0, iRet = 0;

    while(iChoice != 0)
    {
        cout<<"Enter your choice : "<<endl;
        cout<<"1 : Insert First"<<endl;
        cout<<"2 : Insert Last"<<endl;
        cout<<"3 : Insert at position"<<endl;
        cout<<"4 : Delete First"<<endl;
        cout<<"5 : Delete Last"<<endl;
        cout<<"6 : Delete at position"<<endl;
        cout<<"7 : Display the data"<<endl;
        cout<<"8 : Count number of elements"<<endl;
        cout<<"9 : Terminate the application"<<endl;
        cin>>iChoice;

        switch(iChoice)
        {
            case 1:
                cout<<"Enter the value to insert"<<endl;
                cin>>iValue;
                obj.InsertFirst(iValue);
                break;

             case 2:
                cout<<"Enter the value to insert"<<endl;
                cin>>iValue;
                obj.InsertLast(iValue);
                break;

             case 3:
                cout<<"Enter the value to insert"<<endl;
                cin>>iValue;
                cout<<"Enter the position : "<<endl;
                cin>>ipos;
                obj.InsertAtPos(iValue,ipos);
                break;

            case 4:
                obj.DeleteFirst();
               break;

           case 5:
                obj.DeleteLast();
               break;

            case 6:
                cout<<"Enter the position : "<<endl;
                cin>>ipos;
                obj.DeleteAtPos(ipos);
                break;

            case 7:
                obj.Display();
                break;

            case 8:
                iRet = obj.Count();
                cout<<"Number of elements are : "<<iRet<<endl;
                break;

            case 9:
                cout<<"Thank you for using the application"<<endl;
                iChoice = 0;
                break;

                default:
                    cout<<"Please enter proper choice\n";
                    break;
        }   // End of switch
    }// End of while

    return 0;
}