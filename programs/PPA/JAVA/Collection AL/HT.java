import java.io.*;
import java.util.*;
class HT
{
public static void main(String arg[])
{

//Integer is key
//string is value
Hashtable<Integer,String>obj=new Hashtable<Integer,String>();
obj.put(11,"Amit");
obj.put(21,"mahesh");
obj.put(51,"Sarthak");
obj.put(61,"Yash");
obj.put(71,"Rudresh");
System.out.println("paduka alya:"+obj.get(61));
System.out.println(obj.get(71));
System.out.println("Data from hashtable");
Enumeration eobj=obj.keys();
while(eobj.hasMoreElements())
{
System.out.println(eobj.nextElement());
}

}
}

