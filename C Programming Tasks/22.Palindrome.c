#include <stdio.h>
#include <string.h>
#define size 20

void palindrome(char word[size],int len);

int main()

{
    char word[size];
    
    printf("Enter a String:\t");
    scanf("%s",word);
    
    int len = strlen(word);
    palindrome(word,len);
    
    return 0;
}

void palindrome(char word[size],int len)
{
    int i;
    int flag = 1;
    for(i = 0;i<len;i++)
    {
        if(word[i] != word[len-i-1])
        {
            flag = 0;
            break;
            
        }
    }
        if(flag == 1)
        {
            printf("%s is a Palindrome",word);
            
        }
        else
        {
            printf("%s is not a Palindrome",word);
        }
}
