#include<stdio.h>
#define length 100

void getnumber(void(*r)(),void(*p)());
void reverse();
void print();
void(*r)();
void(*p)();
void(*g)();
int main(){
    g = getnumber;
    g(reverse,print);
    
    return 0;
}

void getnumber(void(*r)(),void(*p)())
{
    int arr[length],n;
    
    printf("Enter the number of Elements:");
    scanf("%d",&n);
    
    printf("Enter the value:");
    
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
        printf("\nThe Elements are : ");
        p(arr,n);
        
        printf("\nThe Reversed Elements are:");
        r(arr,n);
        p(arr,n);
    
}
void reverse(int *arr,int n){
    int val;
    for(int i =0;i< n/2;i++)
    {
        val = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = val;
    }
}
void print(int *arr,int n){
    
    for(int i=0;i < n;i++)
    {
        printf("%d",arr[i]);
    }
}