class Employee
{
    String name;
    int year;
    int salary;
    String address;

Employee(String n,int y,String a)
{
    this.name = n;
    this.year = y;
    this.address = a;
}

void display()
{
    
    System.out.println(name + year + address);
}

}

public class Employee1
{
    public static void main(String[] args)
    {
        Employee e1 = new Employee("Robert ",1994, "  64C- WallsStreet");
        Employee e2 = new Employee("Sam ", 2000,"  68D- WallsStreet");
        Employee e3 = new Employee("John ", 1999, "  26B- WallsStreet");
        System.out.println("Name  " + "Year of joining  " + "Address ");
        e1.display();
        e2.display();
        e3.display();
    }
}