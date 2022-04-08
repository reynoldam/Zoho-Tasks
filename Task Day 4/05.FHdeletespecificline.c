#include <stdio.h>
#include <stdlib.h>
#define len 100

int main()

{
    FILE *f1,*f2;
    int del;
    int val;
    char name[len];
    char data[len];
    char ch;
    
    printf("Enter the Name of File 1: ");
    scanf("%s",name);
    f1 = fopen(name,"w");
    
    int num;
    printf("Enter the Number of data to get stored: ");
    scanf("%d",&num);
    
    for (int i = 0; i<num ;i++)
    
    {
        printf("Enter Data %d: ",num);
        scanf("%s",data);
        fprintf(f1,"%s",data);
    }
    
    fclose(f1);
    
    f1 = fopen(name,"r");
    ch = getc(f1);
    
    printf("Enter the line number to be deleted: ");
    scanf("%d",&del);
    
    
    while(ch != EOF)
    {
        if(ch=='\n')
        {
            printf("c",ch);
            val ++;
        }
        
        if(val != del)
        {
          putc(ch,f2);  
        }
        ch = getc(f1)
    }
    fclose(f1);
    fclose(f2);
}
