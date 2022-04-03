#include <stdio.h>

int add(int n);

int main()
{
    int num,add1;
    printf("Enter the number : ");
    scanf("%d",&num);

    add1 = add(num);

    printf("%d",add1);
    
    return 0;
}

int add(int n)

{
    if(n == 0)
	    return 0;
    return((n % 10) + add(n/10));
   
}