#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

typedef struct node node;
typedef struct node* pnode;
typedef struct node** ppnode;

class stack_LL
{
    private:
        pnode head;

    public:

        stack_LL();
        void push(int no);
        void pop();
        void show();

};

stack_LL::stack_LL()
{
    head=NULL;
}

void stack_LL::push(int no)
{
    pnode newn=NULL;
    newn=new node;

    if(newn==NULL)
    {
        cout<<"not able to push the element"<<endl;
    }
    else
    {
        if(head==NULL)
        {
            newn->data=no;
            newn->next=NULL;
            head=newn;
        }
        else
        {
            newn->data=no;
            newn->next=head;
            head=newn;
        }
        cout<<"item pushed."<<endl;
    }
}

void stack_LL::pop()
{
    int item;
    pnode temp=NULL;
    temp=new node;

    if(head==NULL)
    {
        cout<<"stack underflow"<<endl;
    }
    else
    {
        item=head->data;
        temp=head;
        head=head->next;
        delete temp;
        cout<<"item popped"<<endl;
    }

}

void stack_LL::show()
{
    int i;
    pnode temp=NULL;
    temp=new node;

    temp=head;
    if(temp==NULL)
    {
        cout<<"stack is empty"<<endl;
    }
    else
    {
        cout<<"printing stack element:"<<endl;

        while(temp != NULL)
        {
            cout<<temp->data<<","<<endl;
            temp=temp->next;
        }
    }

}

int main()
{
    stack_LL obj;

    int choice=1,no;

    while(choice != 0)
    {
        cout<<"Choose one from the below operation:"<<endl;
        cout<<"1.Push"<<endl<<"2.pop"<<endl<<"3.Show"<<endl<<"4.Exit"<<endl;
        cout<<"enter your choice:"<<endl;
        cin>>choice;

        switch(choice)
        {
            case 1: cout<<"enter number:";
                    cin>>no;
                    obj.push(no);
                break;

            case 2: obj.pop();
                break;

            case 3: obj.show();
                break;

            case 4: cout<<"thanks for using my application."<<endl;
                    choice=0;
                break;

            default:    cout<<"invalid choice."<<endl;
        }
    }
}