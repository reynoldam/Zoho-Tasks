

public class Detailsfood 

{	
	int hid;
	String foodname;
	int foid;
	int fqua;
	int fprice;
	int fi;
	
	
    public Detailsfood(int hid,String foodname,int foid,int fqua,int fprice)
    
    {
        this.hid = hid;
        this.foodname = foodname;
        this.foid = foid;
        this.fqua = fqua;
        this.fprice = fprice;
        
    }
    
    public Detailsfood(int fi,int orq)
    
    {
        this.fi  = fi;
        this.orq = orq;
    }
    
    public void displayfood()
    
    {
        
     System.out.println("Food Name:  " + foodname);
     System.out.println("Food ID:  " + foid);
     System.out.println("Food Quantity Available : " + fqua);
     System.out.println("Food Price:  " + fprice);
     System.out.println();
        
    }
}