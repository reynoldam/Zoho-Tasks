#include<stdio.h>
#include<string.h>
#define len 30
void getinputs();
void display();

void(*p)();

struct employee
{
    char name[len];
    int id;
};

struct joining
{
    int date;
    int month;
    int year;
    struct employee empo;
};
struct joining join;
void main()
{
    p = getinputs;
    p();
    
}

void getinputs()
{
    printf("Enter name of the employee:\n");
    scanf("%s",join.empo.name);
    printf("enter the employee id:\n");
    scanf("%d",&join.empo.id);
    printf("Enter the date of Joining:\n");
    scanf("%d",&join.date);
    printf("Enter The Month of joining:\n");
    scanf("%d",&join.month);
    printf("Enter The year of joining:\n");
    scanf("%d",&join.year);
    p = display;
    p();
}

void display()
{
    printf("Name: %s\nEmployee id: %d\n",join.empo.name,join.empo.id);
    printf("Date of Joining: %d/%d/%d\n",join.date,join.month,join.year);
}
