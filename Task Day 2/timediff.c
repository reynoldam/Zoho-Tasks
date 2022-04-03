#include <stdio.h>
void getinputs();
void calculate();

void (*p)();
struct ti_me
{
    int sec;
    int min;
    int hrs;
};

struct ti_me t1,t2,tim_dif;

void main()
{
    p = getinputs;
    p();
}
void getinputs()
{
    printf("\nEnter the Starting Time.\n");
    
    printf("\nEnter Hours :");
    scanf("%d",&t1.hrs);
    
    printf("\nEnter Minutes :");
    scanf("%d",&t1.min);
    
    printf("\nEnter Seconds :");
    scanf("%d",&t1.sec);
    
    printf("\nEnter the Endind Time.\n");
    
    printf("\nEnter Hours :");
    scanf("%d",&t2.hrs);
    
    printf("\nEnter Minutes :");
    scanf("%d",&t2.min);
    
    printf("\nEnter Seconds :");
    scanf("%d",&t2.sec);
    
    printf("The Time Difference Between %d:%d:%d and %d:%d:%d is : ",t1.hrs,t1.min,t1.sec,t2.hrs,t2.min,t2.sec);
    
    calculate();
}

void calculate()
{
    while(t1.sec < t2.sec)
    {
        t1.min--;
        t1.sec += 60;
    }
    tim_dif.sec = t1.sec - t2.sec;
    while(t1.min < t2.min)
    {
        t1.hrs--;
        t1.min += 60;
    }
    tim_dif.min = t1.min - t2.min;
    tim_dif.hrs = t1.hrs - t2.hrs;
    
    printf("%d:%d:%d",tim_dif.hrs,tim_dif.min,tim_dif.sec);
}