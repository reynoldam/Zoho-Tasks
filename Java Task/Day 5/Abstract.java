
abstract class Calculator
{
    abstract int display(int a ,int b);
    
    public int Multiply(int a,int b)
    
    {
        return a*b;
    }
    
}

class Add extends Calculator
{
    public int display(int a,int b)
    
    {
        return a+b;
    }
}

class Sub extends Calculator
{
    public int display(int a, int b)
    {
        return a-b;
    }
}

public class Abstract
{
	public static void main(String[] args) 
	{
		Calculator a = new Add();
		Calculator s = new Sub();
		
		System.out.println("SUBTRACTING TWO NUMBERS: " + a.display(8,3));
		System.out.println("SUBTRACTING TWO NUMBERS: " + s.display(8,3));
		System.out.println("SUBTRACTING TWO NUMBERS: " + a.Multiply(8,3));
		
	}
}
