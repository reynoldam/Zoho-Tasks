import java.util.*;

public class Binary
{

	public static void main(String[] args) 
	
	{

		 
	long val1, val2;
	int arr1 = 0, out2 = 0;

	int[] sum = new int[10];

	
	Scanner s = new Scanner(System.in);

	
	System.out.print("Enter first binary number: ");
	val1 = s.nextLong();

	System.out.print("Enter second binary number: ");
	val2 = s.nextLong();

	while (val1 != 0 || val2 != 0) 
	{
		sum[out1++] = (int)((val1 % 10 + val2 % 10 + out2) % 2);
		out2 = (int)((val1 % 10 + val2 % 10 + out2) / 2);
		val1 = val1 / 10;
		val2 = val2 / 10;
	}
	
	if (out2 != 0) 
	{
		sum[arr1++] = out2;
	}
	--arr1;
	
	System.out.print("Output: ");
	while (arr1 >= 0) {
		System.out.print(sum[arr1--]);
	}
	
	System.out.print("\n"); 
	
   }
   
}
    

		
	
