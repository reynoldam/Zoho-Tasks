class Hotel
{
    String honame;
    int id;
    int room1;
    int room2;
    int dish;

    
    addhotels add[] = new addhotels[20];
    
}

class Admin extends Hotel
{
    
    public Admin(String name,int uni_id,int acrooms,int nrooms,int dishes,String fo)
    
    {
        honame = name;
        id = uni_id;
        room1 = acrooms;
        room2 = nrooms
        dish = dishes;
        foods = fo;
     
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

void addhotels
{
    Scanner s = new Scanner (System.in);

    int count = 0;
    
    System.out.println("Enter Hotel Name: ");
    name = s.nextLine();
    
    System.out.println("Enter Hotel Id: ");
    uni_id = s.nextInt();
    

    System.out.println("Enter Ac Rooms Available: ");
    acrooms = s.nextInt();
    
    System.out.println("Enter Non-Ac Rooms Available: ");
    nrooms = s.nextInt();
    
    System.out.println("Enter Number of Dishes to Available: ");
    dishes = s.nextInt();
    
    add[count] ="Name " + name + "Hotel ID " + uni_id + "Rooms Available Ac: " + acrooms + "Non Ac" + nrooms+" Dishes Available " + dishes;
    count++;

}

void removehotel()
{
    display();
    
    int remid;
    
    Scanner s = new Scanner(System.in);
    
    System.out.println("Enter The Hotel Id to be removed");
    remid = s.nextInt();
    
    for(int i = 0; i < )
    {
        if(remid == add[i].uni_id)
        {
            flag = 1;
            break;
        }
    }
    
    if(flag == 1)
    
    {
        for(int j = 0; j < count;j++)
        {
            add[j] = add[j+1];
        }
        System.out.println("Hotel Deleted");
    }
    
    else
    
    {
        System.out.println("Invalid Option");
    }
    
    
}

void display
{
    System.out.println("The Hotel Added Are:\n");
    
   for(int i = 0; i < count;i++)
   {
       
       System.out.println(add[i]);
   }
}

}