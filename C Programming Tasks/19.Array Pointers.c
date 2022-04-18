#include <stdio.h>

int main() 
{
    int n, data[20];
    
    printf("\n Enter the Number of Elements : ");
    scanf("%d", &n);
    
    printf("\n Enter %d Array elements : \n", n);
    for (int i = 0; i < n; ++i)
        scanf("%d", data + i);

    printf("\n Array Elements : \n");
    for (int i = 0; i < n; ++i)
        printf("%d\n", *(data + i));
    return 0;
}
