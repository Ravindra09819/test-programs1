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

class singly
{
    private:
    pnode head;

    public:

    singly();
    void insertFirst(int no);
    void insertLast(int no);
    void insertAtPos(int no,int pos);
    void deleteFirst();
    void deleteLast();
    void deleteAtPos(int pos);
    void display();
    int count();
};

singly::singly()
{
    head=NULL;
}

void singly::insertFirst(int no)
{
    pnode newn;

    newn=new node;

    newn->data=no;
    newn->next=NULL;

    if(head==NULL)
    {
        head=newn;
    }

    else
    {
        newn->next=head;
        head=newn;
    }
}

void singly::insertLast(int no)
{
    pnode newn;

    newn=new node;

    newn->data=no;
    newn->next=NULL;

    if(head==NULL)
    {
        head=newn;
    }

    else
    {
        pnode temp=NULL;
        temp=head;

        while(temp->next!=NULL)
        {
            temp=temp->next;
        }

        temp->next=newn;
        newn->next=NULL;

    }
}

void singly::insertAtPos(int no,int pos)
{
    int size=count();

    if((pos<1)||(pos>size+1))
    {
        cout<<"Invalid position";
        return;
    }

    else if(pos==1)
    {
        insertFirst(no);
    }

    else if(pos==size+1)
    {
        insertLast(no);
    }
    else
    {
        pnode newn=NULL;
        newn=new node;

        newn->data=no;
        newn->next=NULL;

        pnode temp=head;

        for(int i=1;i<pos-1;i++)
        {
            temp=temp->next;
        }

        newn->next=temp->next;
        temp->next=newn;
    }
}

void singly::deleteFirst()
{
    int size=count();
    if(head==NULL)
    {
        return;
    }

    else if(size==1)
    {
        delete head;
        head=NULL;
    }
    else
    {
        pnode temp=head;
        head=temp->next;
        delete temp;
    }
}

void singly::deleteLast()
{
    int size=count();
    if(head==NULL)
    {
        return;
    }

    else if(size==1)
    {
        delete head;
        head=NULL;
    }
    else
    {
        pnode temp=head;
        
        while(temp != NULL)
        {
            temp=temp->next;
        }

        delete temp->next;
        temp->next=NULL;
    }
}

void singly::deleteAtPos(int pos)
{
    int size=count();

    if((pos<1)||(pos>size+1))
    {
        cout<<"invalid position"<<endl;
    }

    else if(pos==1)
    {
        deleteFirst();
    }

    else if(pos==size)
    {
        deleteLast();
    }
    else
    {
        pnode temp=head;
        for(int i=1;i<pos-1;i++)
        {
            temp=temp->next;
        }
        pnode tempDelete=temp->next;
        temp->next=tempDelete->next;
        delete tempDelete; 
    }
}

void singly::display()
{
    if(head==NULL)
    {
        return;
    }
    pnode temp=head;
    while (temp != NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
        
    }
    
}

int singly::count()
{
    pnode temp=head;
    int cnt=0;

    if(head==NULL)
    {
        cout<<"linked list is empty.";
    }
    else
    {
        do
        {
            cnt++;
            temp=temp->next;
        }
        while(head!=NULL);
        return cnt;

    }

    
}



int main()
{
    int choice=1;
    int value=0;
    int pos=0,ret=0;

    singly obj;

    while(choice !=0)
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
        cin>>choice;

        switch(choice)
        {
            case 1: cout<<"enter value to insert:"<<endl;
                    cin>>value;
                    obj.insertFirst(value);
                    break;

            case 2: cout<<"insert value to insert."<<endl;
                    cin>>value;
                    obj.insertLast(value);
                    break;

            case 3: cout<<"Enter the value to insert"<<endl;
                    cin>>value;
                    cout<<"Enter the position : "<<endl;
                    cin>>pos;
                    obj.insertAtPos(value,pos);
                    break;        
                    
            case 4: obj.deleteFirst();
                    break;

            case 5: obj.deleteLast();            
                    break;;

            case 6:  cout<<"enter the position:"<<endl;
                     obj.deleteAtPos(pos);
                     break;

            case 7:  obj.display()  ;
                     break;

            case 8: obj.count();
                    break;

            case 9: cout<<"thank you for using application"<<endl;
                    choice =0;
                    break;

            default:cout<<"please enter right choice";
                    break;
        }
    }

}