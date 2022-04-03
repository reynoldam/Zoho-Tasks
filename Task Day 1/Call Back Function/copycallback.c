#include <stdio.h>

void getstring(void (*cp)(char*));
void copy(char *ptr);


int main() {

    getstring(copy);
        
    return 0;
}

void getstring(void (*cp)(char*))
{
    char str1[20];
    
    printf("\n Enter String : ");
    scanf("%s", str1);
    
    
    char *ptra = str1;  
    
    printf("The String in ptra : %s\n", ptra);
    cp(ptra);
}
void copy(char *ptr)
{
    printf("copying the content of ptra into ptrb...\n");
    char *ptrb = ptr;
    printf("The String in ptrb : %s", ptrb);
    
}