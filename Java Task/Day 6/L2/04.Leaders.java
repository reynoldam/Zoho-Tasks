import java.util.*;

public class Main
{
	public static void main(String[] args) 
	{
		Scanner s = new Scanner (System.in);
		
		int num;
		
		int flag = 0;
		
		
		System.out.println("Enter the Number of Values: ");
		num = s.nextInt();
		
		int arr[] = new int [num];
		
		System.out.println("Enter the Value\n");
		
		for (int i = 0; i<num; i++)
		{
		    arr[i] = s.nextInt();
		    
		}
		
		System.out.print("The Given Array is :\n");
		
        for(Integer i : arr)
        {
            System.out.print(" " + i);
        }
        
        System.out.println("\nThe Required Array is :\n");
        
        for(int i = 0;i < num; i++)
        {
            for(int j = i+1; j<num; j++)
            {
                if(arr[i] > arr[j])
                {
                    flag = 1;
                    
                }
                else
                {
                    flag = 0;
                    break;
                }
            }
            
            if(flag == 1)
            
            {
                
                System.out.print(" " + arr[i]);
            
                
            }
        
            
        }
            
        
	}
}
