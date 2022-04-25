import java.util.*;

public class Multiply
{

	public static void main(String[] args) 
	{
		int num;
        Scanner s = new Scanner(System.in);
        System.out.println("Enter the Number to be Multiplied:\n");
        
        num = s.nextInt();
        
        System.out.println("The Tables Are: \n");
        
        for(int i = 0; i<10 ; i++)
        {
            System.out.println(num + " X " + (i+1) + " = " + (num*(i+1)));
        }
	}
}
