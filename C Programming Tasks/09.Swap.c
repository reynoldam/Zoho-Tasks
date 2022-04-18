#include<stdio.h>

void swapbyvalue(int a, int b);
void swapbyreference(int *x, int *y);

int main()
{
    int a,b;
    int *x, *y;
    
    printf("\n Enter Values to Swap A & B : ");
    scanf("%d %d", &a, &b);
    
    printf("\n Values before swapping : \n");
    printf(" A : %d\n", a);
    printf(" B : %d\n", b);
    
    x = &a;
    y = &b;
    
    swapbyvalue(a, b);
    swapbyreference(x, y);
    
    return 0;
}

void swapbyvalue(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    
    printf("\n Values After swapping by value : \n");
    printf(" A : %d\n", a);
    printf(" B : %d\n", b);
    
}

void swapbyreference(int *x, int *y)
{
    int *temp;
    temp = x;
    x = y;
    y = temp;
    
    printf("\n Values After swapping by reference : \n");
    printf(" A : %d\n", *x);
    printf(" B : %d\n", *y);
}
