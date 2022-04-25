import java.util.*;

public class Odd
{

	public static void main(String[] args) 
	{
	
		Scanner s = new Scanner(System.in);
		int num;
		int sum = 0;
		System.out.println("Enter Number of Elements to be Displayed: ");
		num = s.nextInt();
		System.out.println("The Odd Numbers Are:\n");
		
		for(int i = 1; i <= num*2; i++)
		{
		    if(i % 2 != 0)
		    
		    {
		        System.out.println(i);
		        sum += i;
		    }
		    
		}
		System.out.println("\nThe Sum of odd numbers are: " + sum);
		
	}
	
}
