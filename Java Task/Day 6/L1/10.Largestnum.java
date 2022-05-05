public class Main
{
	public static void main(String[] args) 
	{
		int nums[] = {1,2,3,4,0,6};
		int temp ;
		
		for(int i = 0; i < nums.length; i++)
		{
		    for(int j = 0; j < nums.length; j++)
		    {
		        if(nums[i] > nums[j])
		        {
		            temp = nums[i];
		            nums[i] = nums[j];
		            nums[j] = temp;
		        }
		    }
		}
		System.out.println("The Sorted Array is ");
		
		for(Integer i : nums)
		{
		    System.out.print(i);
		}
	}
}