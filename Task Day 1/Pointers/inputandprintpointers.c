#include<stdio.h>

void input();
void print(int *arr, int n);

void (*i)();
void (*p)(int *,int);

int main()
{
    
    i = input;
    i();
    return 0;
}

void input()
{
    int arr[20], n, i;
    
    printf("size of array : \n");
    scanf("%d", &n);
    
    printf("Enter the elements : \n");
    
    for(i = 0; i< n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    p = print;
    p(arr, n);
}

void print(int *arr, int n)
{
    int(*add), i;
    add = arr;
    printf("The elements are : \n");
    for(i = 0; i < n;i++)
    {
        printf("%d\n", *(add+i));
    }
    
}