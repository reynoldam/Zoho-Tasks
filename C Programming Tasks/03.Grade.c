#include<stdio.h>

void grade(int num,int sum);

int main()

{
    int num = 0;
	int sum=0;
    

    printf("\n Enter Marks of 5 Subjects out of 100 :\n");

    for(int i = 0; i < 5; i++)

   {
        printf("\n\n Enter Mark %d : ", i+1);
        scanf("%d", &num);
        sum += num;
    }

    printf("\n Sum of 5 Subjects is: %d\n", sum);
    
	grade(num,sum);
	
	return 0;
}

void grade(int num,int sum)

{

	float per;
	
	int total=500;
	
    per = (sum * 100/total);

    printf("\n Percentage is: %.2f",per);
    printf("\n\n Grade : ");
    
    if(per>80)
    
	{
        printf("A+");
    }
    
    else if(per>=65 && per<=80)
	{
        printf("A");
    }
    
    else if(per>=50 && per<=65)
	{
        printf("B");
    }
    
    else if(per>=42 && per<=50)
	{
        printf("C");
    }
    
    else if(per<42)
	{
        printf("FAIL");
    }
}
