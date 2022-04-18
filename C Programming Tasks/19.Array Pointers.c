#include <stdio.h>
#define len 50
int main() 
{
    int n, data[len];
    
    printf("\n Enter the Number of Elements : ");
    scanf("%d", &n);
    
    printf("\nEnter Array elements : \n");
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", data + i);
    }

    
    printf("\n Array Elements :\n");
    
    printf("[");
    
    for (int i = 0; i < n; ++i)
    {    
        printf("\t%d\t", *(data + i));
    }
    
    printf("]");
    
    return 0;
}
