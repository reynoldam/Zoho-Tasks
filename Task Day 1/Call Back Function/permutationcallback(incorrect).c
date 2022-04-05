#include <stdio.h>
#include <string.h>
#define length 100

void permu(char *ch,int x,int y);
void swap(char *a,char *b);
int getinputs(void (*p)(char *,int ,int));

void (*p)(char *,int ,int);
void (*s)(char *,char *);
int (*g)(void (*p)(char *,int ,int));

int main()

{
    g = getinputs(permu);
    g(permu);
    return 0;
}

int getinputs(void (*p)(char *,int ,int))
{
    char str[length];
    int num;
    
    printf("Enter a String : ");
    scanf("%s",str);
    
    num = strlen(str);
    p = permu;
    p(str,0,num-1);
    
    return 0;
}

void permu(char *ch,int x,int y)
{
    int i;
    s = swap;
    
    if(x == y)
    {
        printf("%s\n",ch);
        
    }
    else
    {
        for(i = x; i<= y; i++)
        {
            s((ch+x), (ch+i));
            p(ch, (x+1), y);
            s((ch+x), (ch+i));
        }
    }
    
}


void swap(char *a,char *b)

{
    char val;
    val = *a;
    *a = *b;
    *b = val;
}
