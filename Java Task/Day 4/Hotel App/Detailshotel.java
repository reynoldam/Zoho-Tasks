class Detailshotel
{	
	String hotelname;
	int hotelid;
	
	
Detailshotel(String hotelname,int hotelid)
	{
	    this.hotelname = hotelname;
        this.hotelid = hotelid;
	}
	    
	public void displayhotel()
	{
	    System.out.println("Hotel Available");
	    System.out.println("Hotel name: " + hotelname);
	    System.out.println("Hotel ID: " + hotelid);
	}
}