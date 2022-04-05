#include<stdio.h>
#define length 100

void getinputs();
void display(int arr[length][length],int rw,int col);
void inter(int arr[length][length],int row,int column);

void (*p)();

void main()
{
    p = getinputs;
    p();
}

void getinputs()
{
    int arr[length][length];
    int r,cl;
    printf("Enter the order for matrix :\n");
    scanf("%d %d",&r,&cl);
    printf("Enter the Values:\n");
    for(int i = 0; i < r; ++i)
    {
        for(int j = 0; j < cl; ++j )
        {
            scanf("%d",&arr[i][j]);
        }
        
    }
        printf("The Given Matrix is:\n");
        display(arr,r,cl);
        inter(arr,r,cl);
        
}

void display(int arr[length][length],int rw,int col)
{
    for(int i =0;i < rw;++i)
    {
        for(int j = 0;j < col; ++j)
        {
            printf("%3d",arr[i][j]);
        }
        printf("\n");
    }
}

void inter(int arr[length][length],int row,int column)
{
    int val = 0;
    int i,j;
    for(i = 0; i < row; ++i)
    {
        val = arr[i][i];
        arr[i][i] = arr[i][row-i-1];
        arr[i][row-i-1] = val;
    }
    printf("The InterDiagonal matrix is:\n");
    for(i = 0;i < row; ++i)
    {
        for(j = 0;j < column; ++j)
        {
            printf("%3d",arr[i][j]);
        }
        printf("\n");
    }
}
