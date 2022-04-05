#include <stdio.h>
#define length 100
void getvalue();

void transpose(int arr[length][length],int row ,int column);

void (*p)();

void main()
    {
        p = getvalue;
        p();
    }
    
void getvalue()
    {
        int arr[length][length];
        int row,column;
            printf("Enter the Order: ");
            scanf("%d %d",&row,&column);
            printf("Enter The Values:\n");
                for(int i = 0;i<row;++i)
                 {
                    for(int j = 0;j<column;++j)
                    {
                        scanf("%d",&arr[i][j]);
                    }
                 }
                    printf("The given matrix is:\n");
                        for(int i = 0; i< row;++i)
                        {
                            for(int j = 0;j<column;++j)
                        {
                            printf("%3d",arr[i][j]);
                        }
                            printf("\n");
                        }
            
             transpose(arr,row,column);
         }   
    
void transpose(int arr[length][length],int row,int column)
    
    {
        
        printf("The Transpose is:\n");
        for(int j=0;j<column;++j)
        {
            for(int i =0;i<row;++i)
            
            {
            
                printf("%3d",arr[i][j]);
            
            }
            printf("\n");
        }
    
    }
