import java.util.*;

interface Average
{
    int average(int num1,int num2,int num3);
}

interface Display
{
    void display();
}

class Overall implements Average,Display
{
    int ave;
    
    public int average(int num1,int num2 ,int num3)
    {
        
        return ave = num1 + num2 + num3 / 3;
    }
    
    public void display()
    {
        System.out.println("Overall Average : " + ave);
    }
    
    
}

public class InterFace
{
    public static void main(String[] args)
    {
        Overall o = new Overall();
        
        System.out.println(o.average(8,9,10));
        
        o.display();
    }
}