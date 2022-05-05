import java.util.*;

public class Main
{
	public static void main(String[] args)
	
	{
		
		int input1[] = {1,2,4,5,6};
		int target = 6;
		
		System.out.println("The Index of the numbers are: ");
		for(int i = 0; i < input1.length; i++)
		{
		    for(int j = 1; j < input1.length;j++)
		    {
		        if(input1[i] + input1[j] == target) 
		        {
		            System.out.println("First Number Index: " + (i) + "\n" + "Second Number Index: " + (j));
		        }
		    }
		}
		
		
	}
}