#include<stdio.h>
#include<stdlib.h>
#define len 20

long int findsize(char name[]);

long int findsize(char name[])
{
    FILE *fp1;
    int num;
    char data[len];
    
    printf("Enter the Name of the File:\t");
    scanf("%s",name);
    
    fp1 = fopen(name,"w");
    
    printf("Enter the number of datas to get stored:\n");
    scanf("%d",&num);
    
    printf("Enter Datas to be stores in the file: \n");
    for(int i = 0;i<num;i++)
    
    {
        scanf("%s",data);
        fprintf(fp1,"%s",data);
    }
    
    fclose(fp1);
    
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
  
    long int val = findsize(name);
    
    if(val != -1)
    {
        printf("Size of the File is %ld bytes",val);
    }
    
    return 0;
}

