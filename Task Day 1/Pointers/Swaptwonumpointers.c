#include<stdio.h>

void swap(int a, int b);

void (*s)(int, int);

int main()
{
    int a, b, *p1, *p2;
    
    printf("Enter the First Number : ");
    scanf("%d", &a);
    p1 = &a;
    
    printf("Enter the Second Number : ");
    scanf("%d", &b);
    p2 = &b;
    
    printf("\nThe value of A : %d and B : %d. --> Before Swapping", *p1, *p2);
    
    printf("\n\nSwapping\n\n");
    
    s = swap;
    s(*p1, *p2);
    
    return 0;
}

void swap(int p1, int p2)
{
    p1 = p1 + p2;
    p2 = p1 - p2;
    p1 = p1 - p2;
    printf("The value of A : %d and B : %d. --> After Swapping", p1, p2);

}