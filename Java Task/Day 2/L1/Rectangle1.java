class Rectangle
{
    int area;
    int length;
    int breadth;


Rectangle(int l,int b)
    {
       this.length = l;
       this.breadth = b;
    
    }


void area()
    {
        int a;
        
        a = length*breadth;
        
        System.out.println("The Area of the Rectangle is "+ a);
    }
}

public class Main
{
    public static void main(String[] args)
    {
        Rectangle r1 = new Rectangle(4,5);
        Rectangle r2 = new Rectangle(5,8);
        
        r1.area();
        r2.area();
    }
}