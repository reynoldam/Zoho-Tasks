#include<stdio.h>
#include <string.h>

void string(void (*c)(char[], char[]));
void con(char str1[], char str2[]);

int main()
{
    string(con);
    
    return 0;
}
void string(void (*c)(char[], char[]))
{
    char a[] = "Hi";
    char b[] = " Reynold";
    printf("Before Concat : \na = %s b = %s", a, b);
    c(a,b);
}

void con(char str1[], char str2[])
{
    strcat(str1,str2);
    printf("\nAfter Concat : \na = %s",str1);
   
}