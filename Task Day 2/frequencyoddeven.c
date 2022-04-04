#include <stdio.h>
#define length 100
void getinput();
void print(int arr[length][length],int row,int column);
void oddoreven(int arr[length][length],int r,int cl);

void (*p)();
void (*i)(int*,int,int);

void main()
{
    p = getinput;
    p();
}
void getinput()
{
    int arr[length][length],row,col;
    printf("Enter the order:\n");
    scanf("%d %d",&row,&col);
    printf("Enter the values:\n");
    for(int i = 0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
        printf("Matrix :\n ");
        print(arr,row,col);
        oddoreven(arr,row,col);
}

void print(int arr[length][length],int row,int column)
{
    for (int i = 0;i<row;i++)
    {
        for(int j = 0;j<column;j++)
        {
            printf(" %3d ",arr[i][j]);
        }
            printf(" \n ");
        
    }
}

void oddoreven(int arr[length][length],int r,int cl)
{
    int even = 0,odd = 0;
    for(int i=0;i<r;i++)
    {
        for(int j = 0;j < cl;j++)
        {
            if(arr[i][j] % 2==0)
                {       
                    even += 1;
                }
            else
                {
                    odd += 1;
                }
        
            
        }

    }
        printf("\nFrequency:\n");
        printf("Even: %d\n",even);
        printf("Odd : %d\n",odd);
    
}