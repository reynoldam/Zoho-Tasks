#include<stdio.h>

void printABCD(int n);

int main()
{
    int n = 65;
    
    printABCD(n);
    
    return 0;
}

void printABCD(int n){
    
    while(n!=91){
        
        printf("%c ", n);
        
        n++;
    }
}
