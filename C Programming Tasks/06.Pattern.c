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
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
