class Admin 
{
  Admin()
  {
      
  }

void admin
{
    String username =  "Admin";
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
        storedetails();
    }
    
    else
    {
        System.out.println("Invalid password or username");
    }
}

void storedetails()
{
    int ch;
    do
    {
        
    System.out.println("Enter choice: ");
    System.out.println("1.Add Hotels");
    System.out.println("2.Remove Hotels");
    System.out.println("3.Display Hotel Present ");
    System.out.println("4.Back to Main menu");
    
    switch(ch)
        {
            case 1:
                addhotels();
                break;
            case 2:
                removehotel();
                break;
            case 3:
                display();
                break;
            case 4:
                System.out.println("Exiting Admin page");
            default:
                System.out.println("Please enter a valid option");
        }
    }   
    while(ch!=4);
}

void addhotels;
{
    Scanner s = new Scanner (System.in);
    String name;
    int uni_id;
    int rooms;
    int dishes;
    String fo;

    int hcount;
    
    
    System.out.println("Enter Hotel Name: ");
    name = s.nextLine();
    
    System.out.println("Enter Hotel Id: ");
    uni_id = s.nextInt();
    
    System.out.println("Enter Rooms Available: ");
    rooms = s.nextInt();
    
    System.out.println("Enter Number of Dishes to Available: ");
    dishes = s.nextInt();
    
    hcount++;
    
    fooddetails();
}

void fooddetails
{
    System.out.println("Enter The Foods Available: ");
    
    for(int i = 0 ; i < dishes;i++)
    {
        fo = s.nextLine();
        food(i) = fo;
    }
}

void removehotel()
{
    addhotels();
    int remid;
    Scanner s = new Scanner(System.in);
    
    System.out.println("Enter The Hotel Id to be removed");
    remid = s.nextInt();
    
    for(int i = 0; i < )
    {
        
    }
    
    
}

void display
{
    
}

}