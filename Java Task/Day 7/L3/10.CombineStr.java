import java.util.*;

public class Main
{
	public static void main(String[] args) 
	{
	    Scanner s = new Scanner (System.in);
	    
	    String name1;
	    String name2;
	    
	    int temp;
	    
	    System.out.println("Enter String name 1: ");
	    name1 = s.nextLine();
	    
	    System.out.println("Enter String name 2: ");
	    name2 = s.nextLine();
	    
	    int len1 = name1.length();
	    int len2 = name2.length();
	    
	   
	   if(len1 > len2)
	   {
	       temp = len1 - len2;
	       
	       System.out.println("The New String is : \t" + name1.substring(temp) + name2);
	   }
	   
	   else
	   {
            temp = len2 - len1;	       
            
            System.out.println("The New String is : \t" + name1 + name2.substring(temp));
	   }
	}
	
	
}