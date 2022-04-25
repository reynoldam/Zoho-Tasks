class Hospital
{
    final void display()
    {
        System.out.println("This is a Hospital");
        
    }
}

class Doctor extends Hospital
{
    public void display()
    {
        System.out.println("Im a Doctor");
    }
}

public class Overrride
{
    public static void main(String[] args)
    {
        Doctor d1 = new Doctor();
        d1.display();
    }
}