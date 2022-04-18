#include<stdio.h>

int main()
{
    int year;
    
    printf("\n Enter a Year : ");
    scanf("%d", &year);
    
    if (year % 4 == 0 && year % 100 != 0)
    {
        printf("\n Leap Year.");
    }
    else
    {
        printf("\n Not a leap Year.");
    }
    return 0;
}
