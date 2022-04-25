
class Hospital
{
    String name;
    int id;
    String qualify;
    String time;
    String problem;
    long number;
    
    public Hospital(Str)
    {
        
    }
     
    
  
}

class Doctor extends Hospital
{
 
    
    public Doctor(String doc_name,int doc_id,String doc_qualify,String doc_time)
    
    {
        name = doc_name;
        id = doc_id;
        qualify = doc_qualify;
        time = doc_time;
    }
    
     public void display()
    
    {
        System.out.println("Doctor Details\n");
        
        System.out.println("Doctor Name:\t" + name);
        
        System.out.println("Doctor Id:\t" + id);
        
        System.out.println("Specialist in : \t" + qualify);
        
        System.out.println("Timing Available : \t" + time);
        
    }
    
    
    
       
}

class Patient extends Hospital

{
 
    public Patient(String p_name,int p_id,String p_problem,long p_number)
    
    {
        name = p_name;
        id = p_id;
        problem = p_problem;
        number = p_number;
    }
    
    public void display()
    {
        System.out.println("\nPatient Details\n");
        
        System.out.println("Patient Name:\t"+ name);
        
        System.out.println("Patient Id:\t" + id);
        
        System.out.println("Patient Problem: \t" + problem);
        
        System.out.println("Phone Number : \t" + number);
    }
}

public class Hospital1
{
    public static void main(String[] args)
    {
        
        
        Doctor d = new Doctor("Reynold",22,"Ortho","7-9");
        d.display();
        
        Patient p = new Patient("Amrith",01,"Fever",9293439434l);
        p.display();
        
        
        
    }
}
