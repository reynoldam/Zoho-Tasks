#include <stdio.h>

int main() 
{
    int n, cnt = 1, space, i, j;
   
    printf("\n Enter the number of rows: ");
    scanf("%d", &n);
   
    for (i = 0; i < n; i++) 
    {
        for (space = 1; space <= n - i; space++)
            printf("  ");
        
        for (j = 0; j <= i; j++) 
        {
            printf("%d   ", cnt);
            cnt++;
        }
        printf("\n");
    }
    return 0;
}
