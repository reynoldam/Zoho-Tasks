class User
{
    void userlogin
    {
        
    String username =  "User";
    String password = "pass";
    String user;
    String pass;
    
    Scanner s = new Scanner (System.in);
    
    System.out.println("Enter username: ");
    user = s.nextLine();
    
    System.out.println("Enter Password: ");
    pass = s.nextLine();
    
        if(username.equalsIgnorecase(user) && password.equalsIgnorecase(pass))
        {
            System.out.println("Login Successful");
            booking();
        }
    
        else
        {
            System.out.println("Invalid password or username")
        }
    }
    
void booking()
    
    {

    int ch;
    do
    {
        
    System.out.println("Enter choice: ");
    System.out.println("1.Book hotel");
    System.out.println("2.Cancel Booking");
    System.out.println("3.History");
    System.out.println("4.Exit");
    
    switch(ch)
        {
            case 1:
                bookhotels();
                break;
            case 2:
                cancelbooking();
                break;
            case 3:
                history();
                break;
            case 4:
                System.out.println("Exiting Admin page");
            default:
                System.out.println("Please enter a valid option");
        }
    }
    
    while(ch!=4);

    }
    
    
    
    
    void bookhotels
    
    {
        int 
    }
}