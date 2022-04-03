#include<stdio.h>
#include<string.h>

void com(char *str1, char *str2);

void (*c)();

int main()
{
    char str1[10] = "Reynold";
    char str2[10] = "Reynold";
    
    c = com;
    c(str1, str2);
    
}

void com(char *str1, char *str2)
{
    int i,j,k,str1len,str2len,cnt=0;
    
    str1len = strlen(str1);
    str2len = strlen(str2);
    
    if (str1len == str2len){
        for(k=0;k<str1len;k++){
            if(str1[k]==str2[k]){
                cnt++;
                continue;
            }
            else{
                break;
            }
        }
        if (cnt==str1len){
            printf("The Strings are Equal.");
        }
        else{
            printf("The Strings are not Equal.");
        }
    }
    
}