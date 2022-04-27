import java.util.*;


class Details
{
    private String name;
    public int rollno;
    protected int mark1;
    protected int mark2;
    protected int mark3;
    protected int average;
    
    
    public String getName()
    {
        return name;
    }
    
    public void setName(String name)
    {
        this.name = name;
    }
}

class Marks extends Details
{

    
    public void Average()
   
   {
        
        
        average = mark1 + mark2 + mark3 / 3;
        
        System.out.println("The Average Mark is :  " + average);
    }
    
    public void getdetails()
    
    {
        Scanner s = new Scanner(System.in);
        
        System.out.println("Enter the Roll number of the Student : ");
        rollno = s.nextInt();
        
        System.out.println("Enter Mark 1: \n");
        mark1 = s.nextInt();
        
        System.out.println("Enter Mark 2: \n");
        mark2 = s.nextInt();
        
        System.out.println("Enter Mark 3: \n");
        mark3 = s.nextInt();
    }
    
    public void print()
    
    {
        System.out.println("The Details of the Students\n");
        System.out.println("Name: " + getName());
        System.out.println("Roll Number: " + rollno);
        System.out.println("Average : " + average);
    }
    
}

public class Main
{
	public static void main(String[] args) {
		
		Marks m = new Marks();
	
		
		m.getdetails();
		m.Average();
		m.setName("Reynold");
		m.print();
	
	
	}
}