#include<stdio.h>
#define len 20

int sum(int r,int c,int a[len][len],int b[len][len]);

int main()
{
    int a[len][len],b[len][len];

    int r,c;
    
    printf("\n Enter row and col size : ");
    scanf("%d %d",&r,&c);
    
    printf("\n Enter values of Matrix 1 : \n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    
    printf("\n Enter values of Matrix 2 : \n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    
    printf("\n Matrix 1 : \n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%3d ",a[i][j]);
        }
        printf("\n");
    }
    
    printf("\n Matrix 2 : \n");
    printf("\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%3d ",b[i][j]);
        }
        printf("\n");
    }
    
    sum(r,c,a,b);
    
    return 0;
}

int sum(int r,int c,int a[len][len],int b[len][len])
{
    int sums[len][len];
    
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            sums[i][j]=a[i][j]+b[i][j];
        }
        
    }
    
    printf("SUM OF TWO MATRIX : \n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
             printf("%3d ",sums[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
