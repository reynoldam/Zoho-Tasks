#include<stdio.h>
#include<string.h>

// FILE NAME original.txt

int main()
{
    
    FILE *fp;
    FILE *fq;
    
    fp = fopen("original.txt", "r");
    fq = fopen("duplicate.txt", "w");
    
    char ch[50], oldchar[50], newchar[50];
    
    printf("\n Contents in File : \n");
    
    fgets(ch, 100, fp);
    
    while(!(feof(fp)))
    {
        printf(" %s", ch);
        fgets(ch, 100, fp);
    }
    
    printf("\n Enter the word to be replaced : ");
    scanf("%s", oldchar);
    
    printf("\n Enter the word to be replaced with %s : ", oldchar);
    scanf("%s", newchar);
    
    rewind(fp);
    
    fscanf(fp, "%s", ch);
    
    while(!(feof(fp)))
    {
        if (strcmp(ch, oldchar)==0)
        {
            fprintf(fq,"%s ", newchar);
        }
        else if (strcmp(ch,"\n") == 0)
        {
            fprintf(fq, "\n");
        }
        else
        {
            fprintf(fq, "%s ", ch);
        }
        
        fscanf(fp, "%s", ch);
    }
    
    fclose(fp);
    fclose(fq);
    
    return 0;
}
