#include<stdio.h>

int max(int *a, int *b);

int (*maxi)(int* , int*);

int main()
{
    int a, b, *ap, *bp;
    
    printf("Enter the First Number : ");
    scanf("%d", &a);
    printf("Enter the Second Number : ");
    scanf("%d", &b);
    
    ap = &a;
    bp = &b;
    
    maxi = max;
    int large = maxi(ap, bp); 
    printf("The Maximum of two numbers %d and %d is : %d ", a,b,large);
    
    return 0;
}

int max(int *a, int *b)
{
    if (*a > *b)
        return *a;
    else
        return *b;
    
}