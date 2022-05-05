public class Main
{
	public static void main(String[] args) 
	{
		Scanner s = new Scanner (System.in);
		
		String str1,str2;
		
		int comp;
		
		System.out.println("Enter String 1:\n");
		str1 = s.nextLine();
		
		System.out.println("Enter String 2:\n");
		str2 = s.nextLine();
		
		comp = str1.compareTo(str2);
		
		if(comp < 0)
		{
		    
		    System.out.println("\nString 1 is less than String 2\n");
		    
		}
		
		else if(comp == 0)
		{
		    
		    System.out.println("\nBoth String are Equal\n");
		    
		}
		
		else
		{   
		    
		    System.out.println("\nString 1 is greater than String 2\n");
		
		    
		}
	}
	
	
}