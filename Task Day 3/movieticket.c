#include <stdio.h>
#include <stdlib.h>
#define length 50

struct movie
{
    char name[length];
    int seat;
    char id;
    char date;
    char day;
}m;
struct movie m.name = {"Beast","101","13-04-2022","Tuesday"};

void getinputs();
void booking();
void cancel();
void history();

void(*p)();

void main()
{
    p = getinputs;
    p();
}
void getinputs()
{
    int ch;
    do{
    printf("Welcome to ZOHO MY SHOW.");
    printf("--------------------------------------------");
    printf("Please select an option.\n");
    printf("1.Book Movie Ticket\n");
    printf("2.Cancellation\n");
    printf("3.View History\n");
    printf("4.Exit\n");
    scanf("%d",&ch);
    
    switch(ch)
    {
        case 1:
            p = booking;
            p();
            break;
        case 2:
            p = cancel;
            p();
        case 3:
            p = history;
            p();
        case 4:
            printf("Thank you!!!\n");
            break;
            default:
            printf("Enter a valid option\n");
    }
    while(ch!=4)
    
}



}
void booking()
{
    int num;
    struct movie m.seat=30;
    printf("Welcome to Booking section.");
    printf("Please enter number of seats\n");
    scanf("%d",&num);
    if(num <= m.seat)
    {
        ticket();
        m.id++;
    }
    m.seat = m.seat - num;
    if (m.seat < 0)
    {
        printf("Sorry the Show is House full");
    }
    
}
void ticket()
{
    printf("")
    
}
    

