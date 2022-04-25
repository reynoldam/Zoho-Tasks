import java.util.*;

public class Root
{

	public static void main(String[] args) 
	
	{
	    
	  Scanner s = new Scanner(System.in);
	  double val1,val2,val3;
	  
	  double root1,root2,formula;
	  
    System.out.println("Enter Value 1 : ");
    val1 = s.nextDouble();
    
    System.out.println("Enter Value 2 : ");
    val2 = s.nextDouble();
    
    System.out.println("Enter Value 3 : ");
    val3 = s.nextDouble();
    
    formula = val2 * val2 - 4 * val1 * val3;

    if (formula > 0) 
    
    {

      
      root1 = (-val2 + Math.sqrt(formula)) / (2 * val1);
      root2 = (-val2 - Math.sqrt(formula)) / (2 * val1);

      System.out.println("root1 and root2 : " + root1 + root2);
    
        
    }

    
    else if (formula == 0) 
    
    {

      root1 = root2 = -val2 / (2 * val1);
      System.out.println("root1 = root2 =  " + root1);
    
        
    }

    else
    
    {

      
      double real_num = -val2 / (2 * val1);
      
      double imaginary_num = Math.sqrt(-formula) / (2 * val1);
      
      System.out.println("root1 " + real_num + imaginary_num);
      System.out.println("\nroot2 = " + real_num + imaginary_num);
    }
    
  }

		
}