#include<stdio.h>
#include<string.h>
#define len 30
void getinputs();

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

void main()
{
    p = getinputs;
    p();
    
}

void getinputs()
{
    struct joining join;
    printf("Enter name of the employee:\n");
    scanf("%s",(char*)join.empo.name);
    printf("enter the employee id:\n");
    scanf("%d",&join.empo.id);
    printf("Enter the date of Joining:\n");
    scanf("%d",&join.date);
    printf("Enter The Month of joining:\n");
    scanf("%d",&join.month);
    printf("Enter The year of joining:\n");
    scanf("%d",&join.year);
    printf("Name: %s\nEmployee id: %d\n",(char*)join.empo.name,join.empo.id);
    printf("Date of Joining: %d/%d/%d\n",join.date,join.month,join.year);
  
}