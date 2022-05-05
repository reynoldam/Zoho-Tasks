import java.util.*;

public class Main
{
	public static void main(String[] args) 
	{
	    Scanner s = new Scanner(System.in);
	    String name;
	    int cnt = 0;
	    
	    System.out.println("Enter the String Name: ");
	    name = s.nextLine();
	    
	    int len = name.length();
	    
	    for(int i = 0;i<len; i++)
	    {
	        for(int j = i+1;j<len;j++)
	        {
	            if(i != j && name.charAt(i) == name.charAt(j))
	            {
	                cnt = 1;
	                break;
	            }
	        }
	        
	        if (cnt == 0)
	        {
	            System.out.println("The First Non Repeating Character in the String is " +  name.charAt(i));
	            break;
	        }
	    }
	    if(cnt == 1)
	    {
	        System.out.println("The First Character is Repeated in the String");
	        
	    }
	}
	
	
}