#include<stdio.h>
#include<stdlib.h>
int even(int num);
int prime(int num);
void fil();

void (*p)();

void main()
{
    p = fil;
    p();
}

int even(int num)
{
    if(num % 2 == 0)
    {
        return num;
    }
    else
    {
        return 1;
    }
}

int prime(int num)
{
    if(num < 0)
    {
        return 0;
    }
    for(int i = 2; i<=num/2 ;i++)
    {
        if(num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

void fil()

{
    FILE *finput;
    FILE *fodd;
    FILE *feven;
    FILE *fprime;
    
    int numb;
    finput = fopen("Number.txt","r");
    feven = fopen("Even.txt","w");
    fodd = fopen("Odd.txt","w");
    fprime = fopen("Prime.txt","w");
  
    
    
    if( finput == NULL || fodd == NULL || feven == NULL || fprime == NULL)
    {
        printf("File does not exist");
        exit(1);
    }
    while(fscanf(finput,"%d",&numb) != -1)
    {
        if(prime(numb))
        {
            fprintf(fprime,"%d",numb);
        }
        else if(even(numb))
        {
            fprintf(feven,"%d",numb);
        }
        else
        {
            fprintf(fodd,"%d",numb);
        }
    }
    
    fclose(finput);
    fclose(fprime);
    fclose(feven);
    fclose(fodd);
}
