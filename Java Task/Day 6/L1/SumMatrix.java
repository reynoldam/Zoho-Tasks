import java.util.*;

public class Main
{

		 
		
		public static void main(String[] args)
		
		{
		    
	
            Scanner s = new Scanner(System.in);
		    
		    
		    int rows,column;
		    
		    
		    
		    
		    
		    System.out.println("Enter the Row Size of Matrix: ");
            rows = s.nextInt();
	        System.out.println("Enter the Column Size of Matrix: ");
	        column = s.nextInt();
		    
		    int mat1[][] = new int[rows][column];
	        System.out.println("The Values for Matrix 1 is : ");
		 
		        for(int i = 0;i < rows; i++)
		        {
		            for(int j = 0; j < column; j++)
		            {
    		            mat1[i][j] = s.nextInt();
    		  
    		        }
    		       
    		    }

		   
		    int mat2[][] = new int[rows][column];
		    System.out.println("The Values for Matrix 2 is : ");
		    
		    for(int i = 0 ; i < rows; i++)
		    {
		        for(int j = 0; j < column; j++)
		        {
		            mat2[i][j] = s.nextInt();
		 
		        }
		    }
		    
		    System.out.println("Matrix 1: ");
		    
		    for(int i = 0; i < rows; i++)
		    {
		        for(int j = 0; j < column; j++)
		        {
		            
		            System.out.print(mat1[i][j] + "\t");
		        }
		        
		        System.out.println();
		    }
		    
		    System.out.println("Matrix 2 : "); 
		    
		    for(int i = 0; i < rows; i++)
		    {
		        for(int j = 0; j < column; j++)
		        {
		            
		            System.out.print(mat2[i][j]+ "\t");
		        }
		        
		        System.out.println(); 
		    }
		    

		    
		       
		        int sum[][] = new int[rows][column];
		        
		        for(int i = 0; i < rows ; i++)
		        {
		            for(int j = 0;j < column; j++)
		            
		            {
		                sum[i][j] = mat1[i][j] + mat2[i][j];
		            }
		            
		        }
		        
		        System.out.println("The Sum Matrix is: ");
		        
		        for(int i = 0; i < rows ; i++)
		        {
		            for(int j = 0; j < column ; j++)
		            
		            {
		                System.out.print(sum[i][j] + "\t");
		            }
		            
		            System.out.println();
		        }
		        

		    
		    
		}
		
		

}
