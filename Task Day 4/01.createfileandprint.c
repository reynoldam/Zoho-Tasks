#include <stdio.h>
#include<stdlib.h>
#define len 100
void main()
{
    FILE *fnew;
    char name[len];
    int age;
    
    fnew = fopen("new_file.txt","w");
    
    if(fnew==NULL)
    {
        printf("File does not exist");
        exit(1);
    }
    printf("Enter the name: %s\n",name);
    scanf("%s",name);
    fprintf(fnew,"Name = %s\n",name);
    
    printf("Enter the age : %d\n",age);
    scanf("%d",&age);
    fprintf(fnew,"Age = %d\n",age);
    fclose;
    
}