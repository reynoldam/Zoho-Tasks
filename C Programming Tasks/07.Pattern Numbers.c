#include <stdio.h>

int main()
{
    int i,j, n;
    
    printf("\n Enter the number of lines : ");
    scanf("%d", &n);
    
    printf("\n");
    for(i = 0; i < n+1; i++)
    {
        for(j = 0; j < i; j++)
        {
            printf(" %d ", j+1);
        }
        printf("\n");
    }
    
    printf("\n ================ \n\n");
    for(i = n; i > 0; i--)
    {
        for(j = 1; j < i+1; j++)
        {
            printf(" %d ", j);
        }
        printf("\n");
    }
    

    return 0;
}
