#include<stdio.h>
#include<stdlib.h>
#define len 20

long int findsize(char name[]);

long int findsize(char name[])
{
    FILE *fp1;
    
    fp1 = fopen(name,"r");
    
    if(fp1 == NULL)
    
    {
        printf("File Does not Exist");
        exit(1);
    }
    
    fseek(fp1,0, SEEK_END);
    
    long int val = ftell(fp1);
    
    fclose(fp1);
    
    
    return val;
    
}

int main()

{
    char name[len];
    printf("Enter the name of the file: ");
    scanf("%s",name);
    
    long int val = findsize(name);
    
    if(val != -1)
    {
        printf("Size of the File is %ld bytes",val);
    }
    
    return 0;
}
