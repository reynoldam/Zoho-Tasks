#include<stdio.h>
#include<stdlib.h>

int main()

{
    FILE *finput;
    FILE *fodd;
    FILE *feven;
    FILE *fprime;

    int flag = 0;
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
    
    printf("File opened successfully\n\n");

    while(feof(finput) == 0)
    
    {
        fscanf(finput,"%d",&numb);
        if(numb%2==0)
        
            {
                fprintf(feven,"%d\n",numb);
            }
        
        else(numb%2 == 1)
        
            {
                fprintf(fodd,"%d\n",numb);
            }
            
        for (int i = 2;i<=numb/2;i++)
        
            {
                if (numb % i == 0)
                    {
                        flag = 1;
                        break;
                    }
            
            }
            
            if(flag == 0)
            
                {
                    fprintf(fprime,"%d\n",numb);
                }
    }

    fclose(finput);
    fclose(fprime);
    fclose(feven);
    fclose(fodd);

    return 0;

    
}
