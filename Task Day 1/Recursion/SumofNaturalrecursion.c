#include <stdio.h>

int sumnat(int num);

int main()
{
    int num;
    printf("Enter The Number: ");
    scanf("%d",&num);
    
    printf("The Sum of %d Natural Number is : %d",num,sumnat(num));
    return 0;
    
}

int sumnat(int num)
{
    if (num==0)
    {
        return 0;
    }
    return(num+sumnat(num-1));
}