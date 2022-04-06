#include<stdio.h>
#include<stdlib.h>

int main()

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
    printf("File opened successfully\n\n");

    while(fscanf(finput,"%d",&numb) != -1)
    {
        if(numb < 0)
        {
            return 0;

            for (int i = 2;i<=numb/2;i++)
            {
                if (numb % i == 0)
                {
                    return 0;
                }
            }

            return 1;

            fprintf(fprime,"%d",numb);
        }

        else if(numb % 2 == 0)
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

    return 0;

}
