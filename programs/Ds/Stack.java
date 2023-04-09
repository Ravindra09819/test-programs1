import java.util.*;
class Stack
{
    static Scanner sc=new Scanner(System.in);
    static int stack[],top=-1,pop,size;
    static
    {
Stack.create();
    }
    public static void main(String args[])
    
    {
        int ch,item;
        
        while(true)
        {
            System.out.println("1.push");
        System.out.println("2.pop");
        System.out.println("3.peek");
        System.out.println("4.traverse");
        System.out.println("5.Quit");

        System.out.println("Enter your  choice:");
        ch=Stack.sc.nextInt();
        switch(ch)
        {
            case 1:System.out.println("Enter element:");
            item=sc.nextInt();
           Stack.push(item);
            break;
            case 2:item=Stack.pop();
            if(item==0)
            {
                System.out.println("Stack is underflow\n");
            }
            else
            {
                System.out.println("popped item:"+item);
            }
            break;
            case 3:peek();
            item=Stack.pop();
            if(item==0)
            {
                System.out.println("Stack is underflow\n");
            }
            else
            {
                System.out.println("peeked item:"+item);
            }
            break;
            case 4:Stack.traverse();
            break;
            case 5:System.exit(1);
            default:System.out.println("invalid choice:");
        }
        }
    }
    static void create()
    {

System.out.println("Enter size of stack:");
      size=Stack.sc.nextInt();
     Stack.stack=new int [size];
     System.out.println("Stack created with size:"+size);
    }
    static void push(int item)
    {
        if(Stack.isFull())
        {
System.out.println("Stack is overflow:\n");
        }
        else
        {
     Stack.stack[++top]=item;
        }
    }

static boolean isFull()
{
    if(top==size-1)
{
return true;
}
else
{
return false;
}
}

static int pop()
{
    if(Stack.isEmpty())
    {
return 0;    }
    else
    {
        return stack[top--];
    }
}

static boolean isEmpty()
{
    if(top==-1)
    {
return true;
    }
    else
    {
        return false;
    }
}

static int peek()
{
    if(Stack.isEmpty())
    {
return 0;    
}
    else
    {
        return stack[top];
    }
}

static void traverse()
{
    if(Stack.isEmpty())
    {
        System.out.println("stack is empty\n");
    }
    else
    {
        System.out.println("Elements of stack:");
        for(int i=top;i>=0;i--)
        {
            System.out.println(stack[i]);
        }
    }
}
}