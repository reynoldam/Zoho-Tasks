class Student
    {
        String name;
        int roll_no;
    }
    
public class Student1
{    
    public static void main(String[] args)
    {
        Student s = new Student();
        s.name = "John";
        s.roll_no = 2;
        
        System.out.println(s.name + " " + s.roll_no);
        
    }
}