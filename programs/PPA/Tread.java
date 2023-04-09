//import java.lang*.;

class Tread

{
public static void main(String arg[])
{
System.out.println("Inside main");
Tre tobj=Tre.currentTread();
System.out.println("Name of current tread is"+tobj.getName());
}
}
