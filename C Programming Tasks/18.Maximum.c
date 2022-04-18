#include <stdio.h>

int CheckMax(int *,int *);

int main()
{
    int F_number, S_number, *ptr,*ptr1;
    
    printf("\n Enter Two Numbers : ");
    scanf("%d %d",&F_number, &S_number);
    
    ptr = &F_number;
    ptr1 = &S_number;
    
    CheckMax(ptr, ptr1);
    
    return 0;
}
int CheckMax(int *ptr,int *ptr1)
{
    if(*ptr > *ptr1){
        printf(" %d is Largest",*ptr);
    }
    else{
        printf(" %d is Largest",*ptr1);
    }
    return 0;
}
