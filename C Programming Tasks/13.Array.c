#include<stdio.h>
#define LENGTH 20
int printArr(int arr[] ,int n);

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
    printArr(arr,n);
    
    return 0;
}
int printArr(int arr[],int n){

    printf("Print Entered Array Values are: \n");
    printf("[");
    
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    
    printf("]");
}
