#include <stdio.h>

void getdetails(void (*ptr)(int *,int));

void insert(int *arr, int n);


int main()
{
    getdetails(insert);
 
    return 0;
}

void getdetails(void (*ptr)(int *,int))
{
    
    int arr[100] ;
    int n ;
    
    printf("Enter the number of Elements : ");
    scanf("%d", &n);
    
    printf("Enter the Elements : \n");
    for(int i = 0; i < n; i++)
    {
        printf("Enter number %d : ", i + 1);
        scanf("%d", &arr[i]);
    }
 
    printf("The Elements are : \n");
    
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
 

    ptr(arr, n);
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