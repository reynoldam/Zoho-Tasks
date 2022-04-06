#include <stdio.h>
#include <stdlib.h>
#define len 50
int filehand();
int (*p)();

void main()
{
    p = filehand;
    p();
}


int filehand()
{
    FILE *fp1,*fp2;
    char file[len];
    char c;
    int delete;
    int val = 1;
    
    printf("Enter the file name: ");
    scanf("%s",file);
    fp1 = fopen(file,"r");
    c = getc(fp1);
    while(c != EOF)
    {
        printf("%c",c);
        c = getc(fp1);
    }
    rewind(fp1);
    printf("Enter the line number to be deleted: ");
    scanf("%d",&delete);
    fp2 = fopen(file,"w");
    while(c != EOF)
    {
        c = getc(fp1);
        if(c = '\n'){
         
            val ++;   
        }
        
        
        if(val != delete)
        {
            putc(c,fp2);
        }
    }
    fclose(fp1);
    rename("replica.txt",file);
    fp1 = fopen(file,"r");
    c = getc(fp1);
    while(c != EOF)
    {
        printf("%s",&c);
        c = getc(fp1);
        
    }
    fclose(fp1);
    return 0;
}