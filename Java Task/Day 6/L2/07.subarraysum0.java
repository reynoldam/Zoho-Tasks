import java.util.*;

public class Main
{
	public static void main(String[] args) 
	{
	    int[] num1= { 1, 2,-2, 3, 4, 5, 6 };

        
        int sum;
        int flag = 0;
        
        for(int i = 0; i < num1.length; i++)
        {
            sum = num1[i];
            
            
                for(int j = i+1; j < num1.length; j++)
                {
                
                    sum += num1[j];
                
                    if(sum == 0)
                
                    {
                        flag = 1;
                        
                    }
                
                }
            
            if(flag == 1)
            {
                
                System.out.println("True");
                break;
            }
        }
            
            if(flag == 0)
            {
                
                System.out.println("False");
             
                
            }
        
            
        
	}
}
