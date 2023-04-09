
import java.util.*;


class Input
{
public static void main( String args[])
{
	Scanner sobj= new Scanner(System.in);
	System.out.println("please enter your name:");
	String name=sobj.nextLine();
	
	
	System.out.println("enter your age:");
	int Age=sobj.nextInt();
	
	System.out.println("please enter your percentage:");
    float percentage=sobj.nextFloat();

System.out.println("your name is:"+name);
System.out.println("your age is:"+Age);
System.out.println("your percentage is:"+percentage);
sobj.close();
}
}

	