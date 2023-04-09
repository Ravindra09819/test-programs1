import java.lang.*;
import java.util.*;

class Exception3
{
    public static void main(String a[])
    {
        int Arr[] = {10,20,30,40,50};
        Scanner sobj = new Scanner(System.in);
       for(int i=0;i<Arr.length;i++)
       {
        System.out.print(" \n"+i);
        System.out.print(" \n"+Arr[i]);
       }
        System.out.println("\nEnter the index");
        int index = sobj.nextInt();

        System.out.println("Element at that index is :"+Arr[index]);
    }
}