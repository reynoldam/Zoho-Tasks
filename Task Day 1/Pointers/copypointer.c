#include <stdio.h>

void copy(char *ptr);

void (*cp)(char*);

int main() {

    char str1[] = "Reynold";
    char *ptra = str1;  
    
    printf("The String in ptra : %s\n", ptra);
    
    cp = copy;
    cp( ptra);
    
    return 0;
}
void copy(char *ptr)
{
    printf("copying the content of ptra into ptrb...\n");
    char *ptrb = ptr;
    printf("The String in ptrb : %s", ptrb);
    
}