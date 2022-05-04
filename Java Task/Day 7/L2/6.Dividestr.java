import java.util.*;

public class Main
{
	public static void main(String[] args) 
	
	{
	    Scanner s = new Scanner (System.in);
	    
	    int spl;
	    
	    int splitsize;
	    
	    String str;
	    
	    System.out.println("Enter the String: ");
	    str = s.nextLine();
	    
	    System.out.println("Enter Number parts to be divide:\n");
	    spl = s.nextInt();
	    
	    int len = str.length();
	    
	    
	    if(len % spl != 0)
	    {
	        System.out.println("The String Cannot be divided");
	        
	    }
	    else
	    {
	        System.out.println("The Given String Is :  " + str);
	    
	        splitsize = len / spl;
	    
	        for(int i = 0;i < len;i++)
	        {
	            if(i % splitsize == 0)
	        {
	            System.out.println(" ");
	        }
	            System.out.println(str.charAt(i));
	    }
	    
		
		
	    }
	}
	
	
}
