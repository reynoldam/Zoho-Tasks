#include <stdio.h>

int CheckMax(int *,int *);

int main()
{
    int first, second, *ptr,*ptr1;
    
    printf("\n Enter Two Numbers : ");
    scanf("%d %d",&first, &second);
    
    ptr = &first;
    ptr1 = &second;
    
    CheckMax(ptr, ptr1);
    
    return 0;
}

int CheckMax(int *ptr,int *ptr1)

{
    if(*ptr > *ptr1)
    {
        printf(" %d is Largest",*ptr);
    }
    else
    {
        printf(" %d is Largest",*ptr1);
    }
    return 0;
}
