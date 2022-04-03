#include <stdio.h>

void insert(int *arr, int n);

void (*i)(int *,int);

int main()
{
    int arr[100] ;
    int n ;
    
    printf("Enter the number of Elements : ");
    scanf("%d", &n);
    
    printf("Enter the Elements : \n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
 
    printf("The Elements are : \n");
    
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
 
    i = insert;
    i(arr, n);
 
    return 0;
}

void insert(int *arr,int n)
{
    int *a, p, num;
    a = arr;
    
    printf("\nEnter the position between 0 and %d : ", n);
    scanf("%d", &p);
    
    printf("\n Enter the Number to be inserted : ");
    scanf("%d", &num);
    
    n++;
    
    for(int i = n-1; i >= p; i--)
        a[i] = a[i - 1];
 
    a[p - 1] = num;
 
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}