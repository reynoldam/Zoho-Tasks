#include <stdio.h>
#define length 50

int len(char str[]);
int num = 0;

int main()
{
    char str[length];

    
    printf("Enter The String: ");
    scanf("%s",str);
    
    printf("The Entered String %s length is: %d",str,len(str));
    
    return 0;
    
}

int len(char str[])
{
    if(str[num] == '\0')
    {
        return num;
    }
    else
    {
        num++;
        len(str);
    }
    
}   
    
