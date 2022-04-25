import java.util.*;

public class Swap
{

	public static void main(String[] args) 
	{
		int val1 ,val2;
		int temp;
		Scanner s = new Scanner(System.in);
		
		System.out.println("Enter The Value 1: ");
		val1 = s.nextInt();
		
		System.out.println("Enter the Value 2: ");
		val2 = s.nextInt();
		
		System.out.println("The Value Before Swapping:\n");
		System.out.println("Value 1 : " + val1);
		System.out.println("Value 2 : " + val2);
		
		temp = val1;
		val1 = val2;
		val2 = temp;
		
		System.out.println("\nThe Value After Swapping:\n");
		System.out.println("Value 1 : " + val1);
		System.out.println("Value 2 : " + val2);
	}
	
}
