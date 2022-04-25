import java.util.*;

public class Guess
{

	public static void main(String[] args) 
	
	{
	  
	  Scanner s = new Scanner(System.in);
	  
	  int num = (int)(Math.random()*10);
	  int count = 3;
	  int guess_num;
	  
	  System.out.println("Welcome to Guessing Game\n");
	  
	 
  while(count != 0)
  {
       
       System.out.println("\nGuess Any Number between 0 to 10\n");
	   guess_num = s.nextInt();
	  
	  if (guess_num < num)
	  
	    {
          count--;
	      System.out.println("The Guessed value is too low " + "Try Again " + count +" Chances left");
	      
	    }
	  
	  else if(guess_num > num)
	  
	    {
          
          count--;
	      System.out.println("The Guessed value is too high " + "Try Again " + count +" Chances left");
          
	      
	    }
	  
	  else if (guess_num == num)
	  
	    {
	      
	      System.out.println("The Guessed value is correct " + "Congratulations");
	      break;
	 
	    }
  }
	  
	  if(count == 0)
	  
	    {
	     
	        System.out.println("You Have No Chaces left ");   
	  
	    }
 
	}
		
}
	