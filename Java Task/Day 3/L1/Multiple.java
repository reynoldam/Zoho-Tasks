interface s1
{
    public void print(String name,int rollno);
  
}

interface s2
{
    public void display(String address,long number);
}

class Display implements s1,s2
{
    public void print(String name,int rollno)
{
    System.out.println("My name is  " + name);
    System.out.println("Roll number " + rollno);
}

public void display(String address,long number)
{
    System.out.println("My Address is  " + address);
    System.out.println("Phone Number " + number);   
}

}

public class Multiple
{
    public static void main(String[] args)
    {
        Display d = new Display();
        
        d.print("Reynold",22);
        d.display("ABC Street",98473239828l);
    }
}