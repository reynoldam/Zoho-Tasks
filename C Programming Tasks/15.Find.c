#include<stdio.h>
#define LENGTH 20
int find(int arr[] ,int n);

int main()
{ 
    int arr[LENGTH];
    int n;
    
    printf("\n Enter the number of elements : ");
    scanf("%d",&n);
    
    for(int i=0;i<n;i++)
    {
        printf("\n Enter the number %d : ", i+1);
        scanf("%d", &arr[i]);
    }
    find(arr,n);
    
    return 0;
}

int find(int arr[],int n)
{

    int fi, flag = 0;
    
    printf("\n Enter the number to find in Array : ");
    scanf("%d", &fi);
    
    for(int i = 0; i < n;i++)
    {
        if (arr[i] == fi)
        {
            printf("\n The number found in pos %d", i+1);
            flag = 1;
            break;
        }
    }
    
    if (flag == 0)
    {
        printf("\n Number not found");
    }
    
}

