#include<stdio.h>

enum levels{Level1 = 1, Level2,Level3,Level4};

void main()
{
    char *arr[100] = {"Brad", "Marlon", "Andrew", "John"};
    
    for (int i = Level1; i <= Level4; i++)
    {
        
        printf("\n Employee %s Level is : %d\n", arr[i-1], i);
        
    }
    
    
    printf("\n The Employee Mike Level is : %d", Level3);

    
}
