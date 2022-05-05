import java.util.*;

public class Main
{
	public static void main(String[] args) 
	{
	        String name;
	        Scanner s = new Scanner(System.in);
	        int ind;
	        
	        System.out.println("Enter the Name: ");
	        name = s.nextLine();
	        
	        int len = name.length();
	        
	        System.out.println("Enter the Index Value of the Character to be Searched within " + len + " Length");
	        ind = s.nextInt();
	        
	        System.out.println(name.charAt(ind));
	}
}
