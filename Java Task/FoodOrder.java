import java.util.*;

class Hotel

{
	private String hotelname;    
	static String foodname = "pizza";
	
	protected int foodid = 100 ;
	int quant;

	int price = 400 ;
	int total;
	static int count = 0;

	String[] hist = new String[10];

	Scanner s = new Scanner (System.in);
	
	Hotel()
	
	{

	}

	public String getHotelname(String hotelname) 

	{
		return hotelname;
	}

	public void setHotelname(String hotelname)

	{
		this.hotelname = hotelname;
	}


}

abstract class History

{	
	
	abstract void history();
	
}

class Display extends History

{
	int count = 0;

	String[] hist = new String[10];
	public void history()
	{
		if (count == 0)
		{
			System.out.println("No records");
		}

		for(int i = 0;i<count;i++)
		{
			System.out.println(i);
		}

	}
}

	


class Food extends Hotel   
{
	public void order()
{
	int id;
	
	System.out.println("Enter Food id:\n");
	id = s.nextInt();
	
	if(foodid == id)
	{
		System.out.println("Enter Number of quantity Needed: ");
		quant = s.nextInt();
		count++;
	}
	
	else
	
	{ 
		System.out.println("Enter a valid food id");
	}

hist[count] = "Ordered:  " + foodname + "Quantity : " + quant ;
}

}


interface t1             

{
	public int Total();
}

class Order implements t1                     

{

	public int Total()

{
	int price,quantity;

	int total;

	return total = price*quantity;
	

}

}

public class App1

{

public static void main(String[] args)

{
	Food f = new Food();                       

	Hotel h = new Hotel();

	Order o = new Order();

	Display d = new Display();

	
	System.out.println(h.setHotelname("Zoho Hotels"));

	f.order();
 
	o.Total();
	
	d.history();
	
	
}
}
