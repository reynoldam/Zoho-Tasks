#include<stdio.h>
#define length 100


void sums(int arr[length][length],int row,int column);

void getinput();


void (*ptr)();

void main(){
    ptr = getinput;
    ptr();
}


void getinput(){
   
    int arr[length][length];
    int rows,col;
    printf("Enter the order of Matrix:\n");
    scanf("%d %d",&rows,&col);
    printf("Enter the Values:\n");
    for(int i = 0;i < rows; i++){
        for(int j = 0;j < col; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < col; j++){
            printf("%3d", arr[i][j]);
        }
        printf("\n");
    }
    
    sums(arr,rows,col);
    
}
void sums(int arr[length][length],int row,int col){
    int i,j;
    int sum_row = 0;
    int sum_col = 0;
    for(i = 0;i<row;++i)
    {
        for(j =0;j<col;++j)
        
        {
            sum_row = sum_row+arr[i][j];
        }
        
        
        printf("Sum of Row %d : %d\n",i+1,sum_row);
        
        sum_row =0;
    }
         

    for(j=0;j<col;++j)
    {
            for(i=0;i<row;++i)
        {
            
                sum_col = sum_col + arr[i][j];
        }
        
        printf("Sum of Column %d : %d\n",j+1,sum_col);
        
        sum_col = 0;
    }
    

}

