#include <stdio.h>
#define length 100
void initialize();
void print(int arr[length][length],int row,int column);
void compare(int arr1[length][length],int arr2[length][length],int r1,int r2,int c1,int c2);
void (*i)();
void (*p)(int*,int,int);
int main(){
    i = initialize;
    i();
    
    return 0;
}
void initialize(){
    int mat1[length][length],mat2[length][length];
    int row1,row2,col1,col2;
    printf("Enter the order of matrix 1: \n");
    scanf("%d %d",&row1,&col1);
    printf("Enter the values for row and column :\n");
    for(int i=0;i<row1;i++){
        for(int j = 0;j<col1;j++){
            scanf("%d",&mat1[i][j]);
            
        }
    }
    printf("Enter the order of matrix 2: \n");
    scanf("%d %d",&row2,&col2);
    printf("Enter the values for row and column :\n");
    for(int i=0;i<row2;i++){
        for(int j=0;j<col2;j++){
            scanf("%d",&mat2[i][j]);
        }
    }
    printf("\nMatrix 1:\n");
    print(mat1,row1,col1);
    
    printf("\nMatrix 2:\n");
    print(mat2,row2,col2);
    
    compare(mat1,mat2,row1,col1,row2,col2);
}
void print(int arr[length][length],int row,int col){
    for(int i = 0;i<row;i++)
    {
        for(int j = 0;j<col;j++)
        {
            
            printf("%3d",arr[i][j]);
        }
        printf("\n");
    }
}
void compare(int arr1[length][length],int arr2[length][length],int r1,int r2,int c1,int c2){
    int flag = 0;
    if(r1 == r2 && c1 == c2){
        printf("\nBoth Matrices are of same order\n");
        for(int i=0;i<r1;i++){
            for(int j=0;j,c1;j++){
                if (arr1[i][j]!=arr2[i][j]){
                    flag = 1;
                    break;
                }
        }
        
    }
    
}
    else 
    {
        printf("\nTwo Matrices Are of different");
        
    }

    if(flag = 0)
    {
        printf("\nTwo Matrices are Equal");
    
    }
    else
    {
        printf("\nMatrices are not Equal");
    }

    }