import java.util.*;

public class Fl
{

	public static void main(String[] args) 
	{
	    float num ;
	    Scanner s = new Scanner(System.in);
	    
	    System.out.println("Enter The Number : ");
	    num = s.nextFloat();
	    
	    if(num > 0)
	    {
            System.out.println("The Number is Positive");
	    }
	    
        else if(num < 0)
        {
            
            if(Math.abs(num) < 1)
            
            {
	            System.out.println("The Number is Small");
	        }
	        
	        else if(Math.abs(num) > 1000000)
	        
	        {
	            System.out.println("The Number is Large");
	        }
	        
	        else
	        {
	            System.out.println("The Number is Negative");
            }
        }
	    
	    else if(num == 0)
	    {
	        System.out.println("Zero");
	    }
	    
    }
		
}