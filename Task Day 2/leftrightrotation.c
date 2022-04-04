#include <stdio.h>
#define length 100

void getinput();
void rightrotate(int arr[],int n);
void leftrotate(int arr[],int n);
void print(int arr[],int n);
int main()
{
    getinput();
    return 0;
}
void getinput()
{
    int arr[length],n,ch;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("\nEnter The values: \n");
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }
        do{
            printf("\nEnter Option: ");
            printf("\n1.Leftrotate ");
            printf("\n2.RightRotate ");
            printf("\n3.Exit \n");
            scanf("%d",&ch);
            switch(ch)
            {
                case 1:
                    leftrotate(arr,n);
                    break;
                case 2:
                    rightrotate(arr,n);
                    break;
                case 3:
                    printf("Thank you ");
                    break;
                        default:printf("select correct option");
                    
            }
        }
        while(ch!=3);
    }
    
void leftrotate(int arr[],int n)
{
    int val,i,j,k;
    
    printf("\nEnter times to rotate left: ");
    scanf("%d",&k);
    for(int i = 0;i < k;i++)
    {
        val = arr[0];
        for(int j = 0;j < n-1;j++)
        {
            arr[j]=arr[j+1];   
        }
        arr[n-1] = val;
    }
    printf("\nAfter LeftRotate: \n");

    print(arr,n);
}

void rightrotate(int arr[],int n){
    int val,i,j,k;
    
    printf("\nEnter the Times to rotate right: ");
    scanf("%d",&k);
    for(int i = 0;i < k;i++)
    {
        val = arr[n-1];
        for(int j = n-1; j > 0 ;j--)
        {
            arr[j] = arr[j-1];
        }
        
        arr[0]= val;
    }
    printf("\nAfter RightRotate: \n");
    print(arr,n);
}
void print(int arr[],int n)
{
    for(int i =0;i < n ;i++)
    {
        printf("%d  ",arr[i]);
        
    }
}