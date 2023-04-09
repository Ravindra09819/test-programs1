import java.io.*;


class Marvellous extends Thread
{
 public void run()
  {
    for(int i=1;i<=100;i++)
        {
        System.out.println("Inside thread:"+Thread.currentThread()+":"+i);
         }
  }
}
class Mythread2
{import java.lang.*;

 public static void main(String args[])
 {

 Marvellous mobj1=new Marvellous();
 Thread t1=new Thread(mobj1,"First");

 Marvellous mobj2=new Marvellous();
 Thread t2=new Thread(mobj2,"second");


 t1.start();
 t2.start();
 }
}



