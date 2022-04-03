#include<stdio.h>

void con(char str1[], char str2[]);

void (*c)(char[], char[]);

int main()
{
    char a[] = "Hi";
    char b[] = " Reynold";
    printf("Before Concat : \na = %s b = %s", a, b);
    c = con;
    c(a,b);
    
    return 0;
}

void con(char str1[], char str2[])
{
    strcat(str1,str2);
    printf("\nAfter Concat : \na = %s",str1);
   
}