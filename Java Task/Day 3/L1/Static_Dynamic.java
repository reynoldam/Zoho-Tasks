class Static

{
    public void display()
    {
        System.out.println("Example of Static binding");
    }
}

class Hospital

{
    public void print()
    {
        System.out.println("This is a Hospital");
        
    }
}

class Patient extends Hospital

{
    public void print()
    {
        System.out.println("Im a Patient");
    }
}

class Doctor extends Hospital

{
    public void print()
    
    {
        System.out.println("Im a Doctor");
    }
}

public class Static_Dynamic

{
    public static void main(String[] args)
    
    {
        Static s1 = new Static();
        s1.display();
       
        Hospital h = new Doctor();
        h.print();
       
        h = new Patient();
        h.print();
    }
    
}
