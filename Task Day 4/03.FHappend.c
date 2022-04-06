#include <stdio.h>
#include <stdlib.h>
#define len 100

void main()
{
    char str[len];
    FILE *fnew;
    fnew = fopen("Message.txt","a");
    
    if (fnew==NULL)
    {
        printf("file does not exist");
    }
    printf("Enter the Message:\n");
    scanf("%s",str);
    fprintf(fnew,"%s\t",str);
    
    fclose;
}