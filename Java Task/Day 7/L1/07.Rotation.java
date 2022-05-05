import java.util.*;

public class Main
{
	public static void main(String[] args) 
	{
	    Scanner s = new Scanner (System.in);
	    String name1;
	    String name2;
	    
	    System.out.println("Enter String 1: \n");
	    name1 = s.nextLine();
	    System.out.println("Enter String 2: \n");
	    name2 = s.nextLine();
	    
	    int len1 = name1.length();
	    int len2 = name2.length();
	    
	    String name3 = name1 + name1;
	    
	    System.out.println("The Concatenation of String 1 is: \t " + name3 );
	    
	    if(len1 == len2 && (name3).indexOf(name2) != -1)
	    {
	
	            System.out.println("String 2 Exist in String 1's Concatenation");
	        
	    }
	    
	    else
	    
	    {
	        
	        System.out.println("String 2 Does not exist in String 1");
	    
	        
	    }
	    
	}
	
	
}