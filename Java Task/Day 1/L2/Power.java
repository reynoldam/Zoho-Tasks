import java.util.*;

public class Power
{

	public static void main(String[] args) 
	{
	   Scanner s = new Scanner(System.in);  
	   int val1,val2;
	   int temp,pow;
	   
	   System.out.println("Enter Number 1:\n");
	   val1 = s.nextInt();
	   System.out.println("\nEnter Number 2:\n");
       val2 = s.nextInt();
       
       temp = 1;
       pow = 1;
       
       while(temp<=val2)
       {
           pow = pow*val1;
           
           temp++;
       }
       
       System.out.println("The Power Raised is : " + pow);
    }
		
}
	