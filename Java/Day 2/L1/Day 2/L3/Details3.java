class Student
{
    int roll_no;
    String name;
    int ph_num ;
    String address;
    
    Student(int r,String n,int p,String a)
    {
        roll_no = r;
        name = n;
        ph_num = p;
        address = a;
    }
    
    void display()
    {
        System.out.println("Roll Number: " + roll_no);
        System.out.println("Name: " + name);
        System.out.println("Phone Number : " + ph_num);
        System.out.println("Address " + address);
    }
}

public class Details3
{
    public static void main(String[] args)
    {
        Student s1 = new Student(21,"Sam",9898303,"Wall Street");
        Student s2 = new Student(24,"John",9124532,"Oxford Street");
        System.out.println("The Following Details are : \n");
        System.out.println("Student 1: \n");
        s1.display();
        System.out.println("\nStudent 2: \n");
        s2.display();
    }
}