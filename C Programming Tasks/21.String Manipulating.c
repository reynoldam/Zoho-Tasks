#include<stdio.h>
#include<string.h>
#define len 50
int main()
{
    char s[len];
    
    printf("\n Enter A String : ");
    scanf("%s", s);
    
    printf("The Len Of string : %d", strlen(s));
    
    char cp[len];
    
    printf("\n The String Copied to Cp : %s",  strcpy(cp, s));
    
    char con[len];
    
    printf("\n Enter A String to concatenate  : ");
    scanf("%s", con);
    
    printf("\n concatenated String : %s", strcat(s, con));
    
    printf("\n Lowercase : %s", strlwr(s));
    printf("\n Uppercase : %s", strupr(s));
    
    return 0;
}
