import java.util.*;

class Payment

{
         private int bal;
         String name = "Reynold";
         String bankName = "SBI";
         private String acc;
         Scanner s = new Scanner(System.in);
         String[] his = new String [20];
         int count = 0;
         int pin = 6677;
         
    
    public String getAcc()
    {
        return acc;
    }
    
    public void setAcc(String acc)
    {
        this.acc = acc;
    }
    
    public int getBal()
    {
        return bal;
    }
    
    public void setBal(int bal)
    {
        this.bal = bal;
    }
public void Pin()

{
    int pin1;
    
    int cnt = 2;
    
    System.out.println("Welcome!!!!!\n");
    

    System.out.println("Enter Your Pin Number:\n");
    while(cnt > 0)
    
    {
        pin1 = s.nextInt();
    
    if(pin == pin1)
        
        {
            Template();
            break;
        }
        
    else
        {
            cnt--;
            System.out.println("Your Pin Number is Incorrect Try Again");
        } 
        
    if(cnt == 0)
    
    {
         System.out.println("Your Card has Been Temporarily Blocked Please Contact Your Respective Bank\n");
    }
    
    }
}
public void Template()

{

       int opt = 0;
       
       System.out.println("Welcome\n");
    
    do
    
    {
        
        System.out.println("Enter Options\n");
        System.out.println("1.Details\n");
        System.out.println("2.Withdraw\n");
        System.out.println("3.Deposit\n");
        System.out.println("4.Check Transactions And History\n");
        System.out.println("5.Reset Pin Number\n");
        System.out.println("6.Exit");
        
        opt = s.nextInt();
        s.nextLine();
        
        switch(opt)
        
        {
            case 1:
                Details();
                break;
                
            case 2:
                Withdraw();
                break;
                
            case 3:
                Deposit();
                break;
            
            case 4:
                History();
                break;    
                
            case 5:
                Resetpin();
                break;
                
            case 6:
                System.out.println("\nThank you\n");
                break;
                
            default:
                System.out.println("Enter a Valid Option\n");
        }
    
    }
    
    while(opt != 4);

}

public void Details()

{
    
  System.out.println(name);
  System.out.println(bankName);
  System.out.println(acc);
  System.out.println(bal);

    
}

public void Withdraw()

{
    
    System.out.println("\nEnter Amount to Withdraw:\n");
    int money = s.nextInt();
    
    if(money <= bal)
    {
        bal -= money;
        System.out.println("\nMoney Withdrawed" + " " + "Thank you for Banking\n");
        his[count] = "Withdraw : -" + money + " " + "Remaining Balance : " + bal;
        count++;
    }
    
    else
    {
        System.out.println("Not Enough Balance\n");   
    }
        
}

public void Deposit()

{
    
  System.out.println("\nEnter the Amount to be Deposited:\n");
  int dep = s.nextInt();
  
  bal += dep;
  
  System.out.println("\nMoney Deposited Successfully\n");
   
   his[count] = "Deposit : +" + dep + " " + "Balance: " + bal;
   count++;

    
}

public void History()
{
    for(int i = 0; i < count; i++)
    {
        System.out.println(his[i]);
        
    }
    

}

public void Resetpin()
{
    int pin2,pin3;
    
    int c = 2;
    
    
    while(c > 0)
    
    {
        System.out.println("Please Enter your old Password:\n");
        pin2 = s.nextInt();
        
    if(pin2 == pin)
    
    {
        System.out.println("Enter a New Pin:\n");
        pin3 = s.nextInt();
        
        pin = pin3;
        
        System.out.println("Pin Number Changed Succesfully\n");
        break;
        
    }
    
    else
    
    {
        c--;
        System.out.println("Pin number is Incorrect,Try again\n");
        

    }
    
    }
    
    if(c == 0)
    
    {
        System.out.println("Your Card has Been Temporarily Blocked Please Contact Your Respective Bank\n");
        System.exit(0);
    }
    
    
    
}

}

public class Main
{
    
public static void main(String[] args)
    
    {
        Payment p = new Payment();
        
        p.setAcc("1023384344534");
        
        p.setBal(200000);
        
        p.Pin();
        
        
    }
}

