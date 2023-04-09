import java.lang.*;
import java.awt.*;
import java.awt.event.*;


class MarvellousFrame extends WindowAdapter implements ActionListener
{
public Frame fobj;
public Button bobj;
public TextField tobj;

public MarvellousFrame(String name)
{
fobj=new Frame(name);
bobj=new Button("Marvellous");
tobj=new TextField();

tobj.setBounds(60,50,170,70);
bobj.setBounds(210,120,60,20);

fobj.add(bobj);
fobj.add(tobj);

fobj.setVisible(true);
fobj.setLayout(null);
fobj.setSize(600,600);
fobj.setVisible(true);
fobj.setLayout(null);
fobj.addWindowListener(this);
}


public void windowClosing(WindowEvent obj)
{
System.exit(0);
}
public void actionPerformed(ActionEvent obj)
{
tobj.setText("Jay Ganesh");
}
}

class FrameDemo5
{
public static void main(String arg[])
{
System.out.println("print the data on console");
MarvellousFrame mobj=new MarvellousFrame("PPA");
}
}
