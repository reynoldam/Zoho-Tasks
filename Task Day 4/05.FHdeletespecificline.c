#include <stdio.h>
#include <stdlib.h>
#define len 100

int main()

{
    FILE *f1,*f2;
    int del;
    int val = 1;
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
        printf("Enter Data:\n");
        scanf("%s",data);
        fprintf(f1,"%s\n",data);
    }
    
    fclose(f1);
    
    f1 = fopen(name,"r");
    
    printf("Enter the line number to be deleted: ");
    scanf("%d",&del);
    
    f2 = fopen("new.txt","w");
    ch = getc(f1);
    
    while(ch != EOF)
    {
        if(ch=='\n')
        {
            val ++;
        }
        
        if(val != del)
        {
          putc(ch,f2);  
        }
        
        ch = getc(f1);
    }
    
    fclose(f1);
    fclose(f2);
}
