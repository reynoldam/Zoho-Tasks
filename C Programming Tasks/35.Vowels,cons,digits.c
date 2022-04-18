#include<stdio.h>
#include<string.h>

int main()
{
    char str[10];

    printf("\n Enter a String : ");
    scanf("%s", str);

    FILE *fvow, *fcon, *fdig;

    fvow = fopen("Vowels.txt", "w");
    fcon = fopen("Consonants.txt", "w");
    fdig = fopen("Digits.txt", "w");


    for(int i = 0; str[i] != '\0'; i++)
    {
        if(isdigit(str[i]))
        {
            fputc(str[i], fdig);
        }
        else if(str[i] == 'A' || str[i] == 'a' || str[i] == 'E' || str[i] == 'e' || str[i] == 'I' || str[i] == 'i' || str[i] == 'O' || str[i] == 'o' || str[i] == 'U' || str[i] == 'u')
        {
            fputc(str[i], fvow);
        }
        else
        {
            fputc(str[i], fcon);
        }

    }

    fclose(fvow);
    fclose(fcon);
    fclose(fdig);

    return 0;
}
