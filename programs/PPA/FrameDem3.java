import java.lang.*;
import java.awt.*;
import java.awt.event.*;


class MarvellousFrame
{
public Frame fobj;

public MarvellousFrame(String name)
{
fobj=new Frame(name);
fobj.setSize(600,600);
fobj.setVisible(true);
fobj.addWindowListener(new MarvellousListener();
}
}
class MarvellousListener implements windowListener
{

}

class FrameDemo3
{
public static void main(String arg[])
{
System.out.println("print the data on console");
MarvellousFrame mobj=new MarvellousFrame("PPA");
}
}
