#include <stdio.h>

void getdetails(void (*ptr)(int [], int));
void remove_element(int arr[],int n);

int main() 
{

    getdetails(remove_element);
    return 0;
}

void getdetails(void (*ptr)(int [], int))
{
    int n;
    int arr[100];
    
    printf("Enter the number of elements : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter number %d : ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    printf("\n The elements in Array : ");
    for (int i = 0; i < n; i++) {     
        printf("%d ", arr[i]);
    }
    
    ptr(arr,n);
}

void remove_element(int arr[], int n)
{
    int val, i;
    printf("\n Enter the Value to be deleted :  \n");   
    scanf("%d", &val);
    
    for (i = 0; i < n; i++) {     
        if (val == arr[i])
        break;
    }
    
    for(int j = i ; j < n - 1; j++)
    {
        arr[j] = arr[j + 1];
    }
    
    n--;

    printf("\nElements of array after delete are : ");
    for(i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }

}