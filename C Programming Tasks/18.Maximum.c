#include <stdio.h>

int CheckMax(int *,int *);

int main()
{
    int f, s, *ptr,*ptr1;
    
    printf("\n Enter Two Numbers : ");
    scanf("%d %d",&f, &s);
    
    ptr = &f;
    ptr1 = &s;
    
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
