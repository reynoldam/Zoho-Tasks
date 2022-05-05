public class Main
{
	public static void main(String[] args) 
	{
	    int[] A = {1, 5, 6, 7, 8, 10};

        int[] B = {2, 4, 9};
        
        int val1 = 0;
        int val2 = 0;
        
        for(int i = 0; i < A.length ; i++)
        {
            for(int j = 0; j < B.length ; j++)
            {
                if(A[i] > B[j])
                {
                    val1 = A[i];
                    A[i] = B[j];
                    B[j] = val1;
                }
            }
        }
        
        for(int i = 0; i < B.length ; i++)
        {
            for(int j = i+1; j < B.length ; j++)
            {
                if(B[i] > B[j])
                {
                    val2 = B[i];
                    B[i] = B[j];
                    B[j] = val2;
                }
                
            }
        }
        
    System.out.println("\nThe Required Array A:\n");     
	
	for (Integer i : A)
	{
	    System.out.print(" " + i);
	    
	}
	
	 System.out.println("\nThe Required Array B:\n" );   
	
	    for(Integer i : B)
	    {  
	    
	        System.out.print(" " + i);
	    }
	    
	}
	
	
}
