#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node* next;
};

typedef struct node node;
typedef struct node* pnode;
typedef struct node** ppnode;

class SinglyCll
{
    private:
    pnode head;
    pnode tail;

    public:

    SinglyCll();
    void InsertFirst(int no);
    void InsertLast(int no);
    void InsertAtPos(int no, int ipos);
    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int ipos);
    void Display();
    int Count();

};

SinglyCll::SinglyCll()
{
    head=NULL;
    tail=NULL;
}

void SinglyCll::InsertFirst(int no)
{
    pnode newn=NULL;
    newn=new node;

    newn->data=no;
    newn->next=NULL;

    if((head==NULL) && (tail==NULL))
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

void SinglyCll::InsertLast(int no)
{
    pnode newn=NULL;
    newn=new node;
    newn->data=no;
    newn->next=NULL;

    if((head==NULL) && (tail==NULL))
    {
        head=newn;
        tail=head;
    }
    else
    {
       tail->next=newn;
       tail=newn;
    }
    tail->next=head;
}

void SinglyCll::InsertAtPos(int no,int pos)
{
    pnode newn=NULL;
    newn=new node;
    newn->data=no;
    newn->next=NULL;

    int size=Count();
    pnode temp=NULL;

    if((pos<1)||(pos>size+1))
    {
        cout<<"invalid position"<<endl;
    }
    if(pos==1)
    {
        InsertFirst(no);
    }

    else if(pos==size+1)
    {
        InsertLast(no);
    }
    else
    {
        temp=head;

        for(int i=1;i<pos-1;i++)
        {
            temp=temp->next;
        }
        newn->next=temp->next;
        temp->next=newn;        
    }
}

void SinglyCll::DeleteFirst()
{
    if((head==NULL)&&(tail==NULL))
    {
        return;
    }

    if(head==tail)
    {
        delete head;
        head=NULL;
    }
    else
    {
        
        head=head->next;
        delete tail->next;
        tail->next=head;
    }   
}

void SinglyCll::DeleteLast()
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
       while(temp->next != tail) 
       {
        temp=temp->next;
       }

       delete tail;
       tail=temp;
       tail->next=head;
    }   

}

void SinglyCll::DeleteAtPos(int pos)
{
    int Size = Count();

    if((pos < 1) || (pos > Size))
    {
        cout<<"Invalid position\n";
        return;
    }

    if(pos == 1)
    {
        DeleteFirst();
    }
    else if(pos == Size)
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
        delete tempDelete;
    }
}

void SinglyCll::Display()
{
    pnode temp=head;
    do
    {
        cout<<"|"<<temp->data<<"|->"<<endl;
        temp=temp->next;
    }
    while(temp != head);
}

int SinglyCll::Count()
{
    pnode temp=NULL;
    int cnt=0;

    if((head==NULL)&&(tail==NULL))
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
        while(temp != head);
        return cnt;
    }

}

int main()
{
    int iChoice = 1;
    SinglyCll obj;
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