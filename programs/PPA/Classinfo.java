import java.lang.*;

class Demo
{
}

class Classinfo
{
public static void main(String ar[])
{
Demo obj=new Demo();
Class cref=obj.getClass();
System.out.println("class name of obj:"+cref.getName());
String str="MArvellous";
Class cref1=str.getClass();
System.out.println("");
}
}

