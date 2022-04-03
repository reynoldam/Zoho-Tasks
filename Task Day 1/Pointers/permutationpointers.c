#include <stdio.h>
#include <string.h>

void permu(char *a, int l, int r);
void swap(char *x, char *y);

void (*p)(char *,int,int);
void (*s)(char *,char *);

int main()
{
    char str[20];
    int n;
    
    printf("Enter a string: ");
    scanf("%s", str);
    
    n = strlen(str);
    p = permu;
    p(str, 0, n-1);
    
    return 0;
}

void permu(char *a, int l, int r)
{
   int i;
   s = swap;
   if (l == r)
     printf("%s\n", a);
   else
   {
       for (i = l; i <= r; i++)
       {
          s((a+l), (a+i));
          permu(a, l+1, r);
          s((a+l), (a+i));
       }
   }
}


void swap(char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}