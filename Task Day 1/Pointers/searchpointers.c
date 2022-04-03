#include <stdio.h>

void search(int arr[], int n);

void (*i)(int [],int);

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
 
    i = search;
    i(arr, n);
 
    return 0;
}

void search(int arr[],int n)
{
    int p = 0, num;
    
    printf("\nEnter the Number to be searched : ");
    scanf("%d", &num);
    
    for ( int i = 0; i < n; i++){
        if (arr[i] == num){
            printf("The number %d is Present in postion : %d", num, i+1);
            p = 1;
        }
    }
    
    if (p == 0)
        printf("The element is not in array.");

}