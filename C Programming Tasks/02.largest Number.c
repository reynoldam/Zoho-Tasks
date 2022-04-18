#include <stdio.h>

void largest(int num1, int num2, int num3);

int main()
{
   int num1, num2, num3;
   
   printf("\n Enter three Numbers :\n");
   scanf("%d %d %d",&num1, &num2, &num3);
   
   largest(num1, num2, num3);
   
   return 0;
}
void largest(int num1, int num2, int num3)
{
    if (num1 > num2 && num1 > num3)
    {
        printf("%d is the largest Number", num1);
        
    }
    else if(num2 > num3)
    {
       printf("%d is the largest Number", num2);
    }
   else
   {
       printf("%d is the largest Number",num3);
   }
}
