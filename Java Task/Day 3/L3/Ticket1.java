import java.util.*;


class Ticket
{
  static int tic_id = 100;
  String name;
  String seat;
  String from;
  String to;
  
  Scanner s = new Scanner(System.in);
  
  void details()
    
    {
      System.out.println("Enter Details:\n");
      System.out.println("Enter Name: \t");
      name = s.nextLine();
      System.out.println("Seat No: \t");
      seat = s.nextLine();
      System.out.println("Location:\n");
      System.out.println("From : \t");
      from = s.nextLine();
      System.out.println("To: \t");
      to = s.nextLine();
      
    }
    
    void print()
    
    {
        System.out.println("Details\n");
        System.out.println("Name : " + name);
        System.out.println("Seat No: " + seat);
        System.out.println("From : " + from);
        System.out.println("To :  " + to);
        System.out.println("Ticket id: " + tic_id);
        tic_id++;
    }
}

class Busticket extends Ticket
{
    public void print()
    {
        details();
        System.out.println("Bus Ticket \n");
        super.print();
    }

    
}

class Flightticket extends Ticket
{
    public void print()
    {
        details();
        System.out.println("Flight Ticket \n");
        super.print();
        
    }
    
}

class Trainticket extends Ticket
{
    public void print()
    {
        details();
        System.out.println("Train Ticket\n");
        super.print();
    }
}

public class Ticket1
{
    public static void main(String[] args)
    {
        int opt;
        
        Ticket t;
        
        Scanner s = new Scanner(System.in);
        
        System.out.println("Welcome to Ticket Booking\n");
        
        do
        
        {
            System.out.println("Select option: ");   
            System.out.println("1.Train Ticket");
            System.out.println("2.Bus Ticket");
            System.out.println("3.Flight Ticket");
            System.out.println("4.Exit");
            
            opt = s.nextInt();
          
        
            switch(opt)
            {
                case 1:
                    t = new Trainticket();
                    t.print();
                    break;
                    
                case 2:
                    t = new Busticket();
                    t.print();
                    break;
                    
                case 3:
                    t = new Flightticket();
                    t.print();
                    break;
                    
                case 4: 
                    System.out.println("Thank you");
                    break;
                    
                default:
                    System.out.println("Please Enter a valid Option");
            }
        }
        while(opt != 4);
    }
}