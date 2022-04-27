iimport java.util.*;

class Payment

{
         private int bal;
         String name = "Reynold";
         String bankName = "SBI";
         private String acc;
         Scanner s = new Scanner(System.in);
         String[] his = new String [20];
         int count = 0;
    
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
        System.out.println("4.Exit\n");
        System.out.println("5.Check Transactions And History\n");
        
        opt = s.nextInt();
        
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
                System.out.println("\nThank you\n");
                break;
            case 5:
                History();
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
}
public class Main
{
    
public static void main(String[] args)
    
    {
        Payment p = new Payment();
        
        p.setAcc("1023384344534");
        
        p.setBal(200000);
        
        p.Template();
        
        
    }
}