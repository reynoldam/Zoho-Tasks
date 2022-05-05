import java.util.*;

public class Main
{
	public static void main(String[] args) 
	{
		Scanner s = new Scanner (System.in);
		int num;
		System.out.println("Enter the number of elements: ");
		num = s.nextInt();
		
		int arr[] = new int[num];
		System.out.println("Enter the Elements:\n");
		for(int i = 0 ; i < num; i++)
		{
		    arr[i]  = s.nextInt();
		}
		
		System.out.print("\nThe Given Array:\n");
		
		for(int i = 0;i<num;i++)
		{
		    System.out.print(arr[i]);
		}
		
		for(int i = 0 ;i < num-1; i++)
		
		{
		    arr[i] = arr[i+1];
		}
		
		arr[num-1] = -1;
		
	    System.out.print("\nThe Required Array is: \n");
	    
	    for(Integer i : arr)
	    {
	        System.out.print(i);
	    }
	}
	
	
}
