#include<stdio.h>

void len(char *str);

void (*l)(char *);

int main()
{
    char *str = "Reynold";
    l = len;
    l(str);
    
    return 0;
}

void len(char *str)
{
    int i;
    
    for(i=0; str[i]!='\0';i++){
    }
    
    printf("Lenght of string : %d", i);
}