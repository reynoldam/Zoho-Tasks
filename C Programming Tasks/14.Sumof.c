#include<stdio.h>
#define LENGTH 20
int add(int arr[] ,int n);

int main()
{ 
    int arr[LENGTH];
    int n = 10;
    
    printf("\n Enter 10 Numbers ");
    
    for(int i=0;i<n;i++)
    {
        printf("\n Enter the number %d : ", i+1);
        scanf("%d", &arr[i]);
    }
    add(arr,n);
    
    return 0;
}
int add(int arr[],int n){
    
    int s = 0;
    for(int i=0;i<n;i++){
        s = s + arr[i];
    }
    
    printf("\n The Sum of 10 Numbers : %d", s);
}
