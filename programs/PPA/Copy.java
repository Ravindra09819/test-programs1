import java.lang.*;
class Employee implements Cloneable
{
public int EID;
public String Ename;
public int Esalary;

public Employee(int id,String str,int no)
{
this.EID=id;
this.Ename=str;
this.Esalary=no;
}
public Object clone()throws CloneNotSupportedException
{
return super.clone();
}
}



class Copy
{
public static void main(String arg[])throws Exception
{
Employee eobj=new Employee(21,"ravi",21000);
System.out.println("EID: " + eobj.EID +" Name: " +eobj.Ename+" Esalary: " +eobj.Esalary);
Employee eobjx=(Employee)eobj.clone();
System.out.println("EID: " + eobj.EID +" Name: " +eobj.Ename+" Esalary: " +eobj.Esalary);
eobj.Ename="Mahesh";
}
}

