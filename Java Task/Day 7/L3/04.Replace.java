import java.util.*;

public class Main
{
	public static void main(String[] args) 
	{
	    String sent = " The quick brown fox jumps over the lazy dog ";
	    
	    String want = "fox";
	    
	    String rep = "cat";
	    
	    System.out.println("The New String is : \t " + sent.replaceAll(want,rep));
	}
	
	
}