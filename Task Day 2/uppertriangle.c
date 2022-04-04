#include <stdio.h>

#define length 100
void getinput();
void uppertriangle(int arr[length][length],int row,int column);
void display(int arr[length][length],int r,int cl);

void (*p)();

void main()
{
  p = getinput;
  p();
    
}
void getinput()
{
    int arr[length][length],row,col;
    printf("Enter the Order:\n");
    scanf("%d %d",&row,&col);
    printf("Enter the value:\n");
    for(int i =0;i < row;i++)
    {
        for(int j = 0;j<col;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("The Given Matrix is :\n");
    display(arr,row,col);
    uppertriangle(arr,row,col);
    
}
void display(int arr[length][length],int r, int cl)
{
    for(int i =0;i<r;i++)
    {
        for(int j =0;j<cl;j++)
        {
            printf("%3d",arr[i][j]);
    }
        printf("\n");
    }
}
void uppertriangle(int arr[length][length],int row,int column)
{
    int flag = 0;
    for(int i = 0;i<row;i++)
    {
        for(int j = 0; j < i ;j++)
        {
            if(arr[i][j]!=0)
            {
                flag = 0;
                
            }
            else
            {
                flag = 1;
            }
        }
    }
        
        if(flag == 1)
            {
                printf("\nIt is a Upper Triangle\n");
            }
        else
            {
                printf("It is not a Upper Traingle\n");   
            }
}