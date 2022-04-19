#include<stdio.h>
#define len 20

int main()
{
    char name[len];
    int count  = 0;
    char data[len];
    FILE *fp1;
    
    printf("Enter the file name: ");
    scanf("%s",name);
    
    fp1 = fopen(name,"w");
    
    printf("Enter the data to be stored: ");
    scanf("%s",data);
    fprintf(fp1,"%s",data);
    
    fclose(fp1);
    
    fp1 = fopen(name,"r");
    
    while(fgetc(fp1) != EOF)
    {
        count++;
    }
    
    fclose(fp1);
    printf("%d",count);
    return 0;
    
}
