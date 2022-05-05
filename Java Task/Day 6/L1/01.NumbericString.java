import java.util.*;

public class Main
{
	public static void main(String[] args)
	
	{
		
		int input1[] = {2,5,6,74,8,9,1,3};
		
		String input2[] = {"Reynold","Amrith","Akash","Mathew","Right"};
		
		System.out.println("The Integer Array Before Sorting :\n");
		System.out.print("[");
		
		for(Integer i : input1)
		{
		    System.out.print(i + "\t");
		}
		
		System.out.print("]");
		
		Arrays.sort(input1);
		
		System.out.println("\nThe Integer Array After Sorting :\n");
		System.out.print("[");
		for(Integer i : input1)
		{
		    System.out.print(i + "\t");
		}
		System.out.print("]");
		
		
		System.out.println("\nThe String Array Before Sorting :\n");
		System.out.print("[");
		for(String i : input2)
		{
		    System.out.print(i + "\t");
		}
		System.out.print("]");
		Arrays.sort(input2);
		
		System.out.println("\nThe String Array After Sorting :\n");
		System.out.print("[");
		for(String i : input2)
		{
		    System.out.print(i + "\t");
		}
		
		System.out.print("]");
	}
}
