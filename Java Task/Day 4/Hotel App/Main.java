class Foods

{
    int nf;
    
    String foodname;
    
    int foid,fqua,fprice;
    
    String hotelname;
    int hotelid;
    
    int fi;
    
    Scanner s = new Scanner(System.in);
    
    Detailsfood food[] = new Detailsfood[10];
    
    Detailshotel hotel[]  = new Detailshotel[10];
    
    Detailsfood cart[] = new Detailsfood[10];
    
    int hcnt = 0;
    int fcount = 0;
    int ocount = 0;
    
    
	String adminname = "Admin";
	int apass = 6666;

	String username = "User";
	int upass = 7777;



	Scanner s = new Scanner (System.in);
	
 
	
public void mainmenu()

{
	int ch;
	
	Scanner s = new Scanner (System.in);
	
	System.out.println("Welcome to Zoho Hotel Management App");
	
    do
    
    {
        System.out.println("Please Select an option ");
        System.out.println("1.Login for Admin");
        System.out.println("2.Login for User ");
        System.out.println("3.Search Restaurants");
        System.out.println("3.Exit");

        ch = s.newInt();

    switch(ch)
    
        {       
            case 1:
		        adminlogin();
		        break;
	        case 2:
		        userlogin();
		        break;
	        case 3:
	            searchres();
	        case 4:
		        System.out.println("Thank you"); 
		        break;
	        default:
		        System.out.println("Enter A Valid Option");
        }

    }
    
    while(ch!=4);
}

public void adminlogin()

{
	String name;
	int pass;
	
	System.out.println("Enter Admin Username: ");
	name = s.nextLine();
	
	System.out.println("Enter Password : ");
	pass = s.nextInt();
	
	if(apass == pass && adminname.equals(name))
		
		{
			adminoptions();
		}
		
	else
		{
			System.out.println("Invalid Credintials");
		}
}

public void adminoptions()

{

 	int opt;
	System.out.println("Welcome to Admin Page");
	
	do
	
	{
		System.out.println("Enter option\n");
		System.out.println("1.Add food items")
		System.out.println("2.Display Hotels and foods  Available");
		System.out.println("3.Delete Hotel");
		System.out.println("4.Delete Food");
		System.out.println("5.Back to Main Menu");
		
		opt = s.nextInt();

    switch(opt)
    
    {
	    case 1:
		    addhotel();
		    break;
		    
	    case 2:
		    alltogether();
		    break;
		    
	    case 3:
		    deletehotel();
		    break;
		case 4:
		    deletefood();
		    break;
	    case 5:
		    mainmenu();
		    break;
	    default
		    System.out.println("Please Enter a Valid Option");
    }

    }
    
    while(opt != 4);

}

public void addhotel()

{
    int num;
    
    
    System.out.println("Enter Number of Hotels to be Added");
    num = s.nextInt();
    
    for(int i = 0; i < num; i++)
    {
        System.out.println("Enter Hotelname ");
        hotelname = s.nextLine();
        
        System.out.println("Enter Hotel ID ");
        hotelid = s.nextInt();
        
        hotel[hcnt] = new Detailshotel(hotelname,hotelid);
        
        hcnt++;
    }
}

public void printhotel()

{
    if(hotel[0] == null)
    
    {
        System.out.println("No Restaurants Available");
    }
    
    System.out.println("Restaurants Available \n");
    
    for(int i = 0 ; i < hcnt; i++)
    
    {
       hotel[i].displayhotel();
    }
}


public void addfood()

{
    printhotel();
    
    System.out.println("Enter The Hotel Id to Which to food to be Added ");
    hid = s.nextInt();
    
    
    
    
    System.out.println("Enter Number of  to be Added");
    nf = s.nextInt();
    
    
    
    for(int i = 0;i < nf; i++)
    
    {
        System.out.println("Enter Food Name: ");
        foodname = s.next();
        
        
        System.out.println("Enter Food id: ");
        foid = s.nextInt();
        
        
        System.out.println("Enter Quantity ");
        fqua = s.nextInt();
        
        
        System.out.println("Enter Food Price: ");
        fprice = s.nextInt();
        
        
        
        food[fcount] = new Detailsfood(hid,foodname,foid,fqua,fprice);
        fcount++;
        
    }
    
       
}

public void printfood()

{
    int hotid;
    
    if(food[0] == null)
    
    {
        System.out.println("No Foods Available");
    }
    
    printhotel();
    System.out.println("Enter the Hotel ID in which you to view food");
    hotid = s.nextInt();
    
    System.out.println("Foods Availble in Restaurant\n");
    for(int i = 0; i < fcount;i++)
    
    {
        if(hotid == food[i].hid)
        {
            for(int j = 0 ; j < fcount; j++)
            {
                food[j].displayfood();
            }
        }
    }
}



public void deletehotel()

{
    
    
    int hd;
    
    if (hotel[0] == null)
    
    {
        System.out.println("No Hotels Available");
        
    }
    
    printhotel();
    
    System.out.println("Enter The Hotel Id to be Deleted : ")
	hd= s.nextInt();
	
    for(int i = 0; i < fcount ; i++)
    
    {
        if(hd == food[i].hid)
	    {
	        for(int j = i; j < fcount; j++)
	        {
	            food[j] = food[j+1];
	            fcount--;
	        }
	    }
    }
    
	for(int i = 0; i < hcnt; i++) 
	
	{
	    if(hd == hotel[i].hotelid)
	    
	    {
	        for(int j = i; j < hcnt; j++)
	 
	        {
	     
	            hotel[j] = hotel[j+1];
	            hcnt--;
	   
	        }
	    }
	}
	
    
}

public void alltogether()
{
    printhotel();
    printfood();
}

public void deletefood()

{
    int fd;
	
	if(food[0] == null)
	
	{
	    System.out.println("No Foods Available");
	}
	
    printfood();
    
    System.out.println("Enter the Food to be Deleted : ");
	fd = s.nextLine();
	
	for(int i = 0;i < count;i++)
	{
	    if(fd == food[i].foid)
	    
	    {
	        for(int j = 0; j < count; j++)
	        {
	            food[j] = food[j+1];
	            
	        }
	    }
	
	}
	
}

public void userlogin()
{	
	String user;
	int pass;
	
	System.out.println("Enter Username: ")
	user = s.nextLine();
	
	System.out.println("Enter password: ");
	pass = s.nextInt();

    if(username.equals(user) && upass == pass)
    
    {
        
	    userorder();
    
    }

    else
    {

        System.out.println("Invalid Credintials ");

    }
}

public void userorder()
{

    int op;
    System.out.println("Welcome to ");

    do

    {

        System.out.println("Please Select an option ");
        System.out.println("1.Order food");
        System.out.println("2.Check History of orders");
        System.out.println("3.Logout");
        op = s.nextInt();
        
    switch(op)
        
        {
            case 1: 
	            foodorder();
	            break;
	        
            case 2:
	            history();
	            break;
            case 3:
	            mainmenu();
	            break;
            default:
	            System.out.println("Please Enter a valid Option");

        }

    }
        while(op!=3);


}


public void foodorder()

{
    int ordid;
    int fi;
    int orq;
    
    
        System.out.println("Welcome");
        
        System.out.println("Please Select an Restaurant");
        
        printhotel();
        
        System.out.println("Please Select the Restaurant Id");
        ordid = s.nextInt;
        
        for(int i = 0; i < hcnt ; i++)
        {
            if(ordid == hotel[i].hotelid)
            {
                System.out.println("Here Are the Foods Available in this Restaurant");
                printfood();
            }
        }
        
        System.out.println("Please Select Food to Order");
        System.out.println("Enter food id for the food you want: ");
        fi = s.nextInt();
        do
        
        {
           
            System.out.println("Enter The Quantity you want to order");
            orq = s.nextInt();
            
                for(int i = 0;i < fcount; i++)
                
                {
                    if(fi == food[i].foid)
                    
                    {
                        if(orq < food[i].fqua)
                        
                        {
                            cart[ocount] = new Detailsfood(fi,orq);
                            
                            food[i].fqua--;
                            
                            ocount++;
                            
                        }
                    }
                
                }
                
             System.out.println("Enter food id for the food you want: ");
                fi = s.nextInt();
        }
        
        while(ordid = -1)
}









}
