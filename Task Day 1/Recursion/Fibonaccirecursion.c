#include <stdio.h>

int fibo(int);

int main()
{
    int num;
    printf("Enter the Number of Elements: \n");
    scanf("%d",&num);
    
    printf("The Fibonacci Series is: \n");
    for(int i = 0; i<num; i++)
    {
        printf("%3d",fibo(i));
    }
    
    return 0;
}
int fibo(int i)

{
    if(i==0)
    {
        return 0;
    }
    
    else if(i==1)
    {
        return 1;
    }
    else
    {
        return(fibo(i-1)+fibo(i-2));
    }
}