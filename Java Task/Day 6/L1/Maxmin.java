import java.util.*;

public class Main
{
	public static void main(String[] args)
	
	{
		
	    Scanner s = new Scanner(System.in);
	    
	    int num,lar,temp;
	    
	    
	    System.out.println("Enter the number of elements");
	    num = s.nextInt();
	    
	    int array[] = new int[num];
	    System.out.println("Enter the Values: ");
	    for(int i = 0;i < num;i++)
	    {
	        array[i] = s.nextInt();
	    }
	    for(int i = 0;i<num;i++)
	    {
	        for(int j = i;j<num;j++)
	        {
	            if(array[i]>array[j])
	            {
	                temp = array[i];
	                array[i] = array[j];
	                array[j] = temp;
	            }
	        }
	    }
	    
	    System.out.print("The Sorted Array is :\n");
	    
	    for(Integer i : array)
	    {
	        System.out.println(i);
	    }
	    
	    System.out.print("The Required Array is :\n");
	    for(int i = 0;i<num/2;i++)
	    {
	        lar = num-i-1;
	        System.out.print(" " + array[lar] + " " + array[i]);
	    }
	    
		if(num%2==1)
		{
		    System.out.print(" " + array[num/2]);
		}
	}
}
