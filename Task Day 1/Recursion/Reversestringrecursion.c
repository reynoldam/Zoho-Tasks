#include <stdio.h>
#define len 100

void reverse(char *a);

int main()
{
    char str[len];
    printf("Enter any String:\n");
    scanf("%s",str);
    printf("The Reversed String: ");
    reverse(str);
    
    return 0;
}

void reverse(char *a)
{
    if(*a)
    {
       reverse(a+1);
    }
    printf("%c",*a);
        
}