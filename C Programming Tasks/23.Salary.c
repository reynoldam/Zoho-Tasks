#include <stdio.h>
#define len 50

typedef struct employee 
{
    char name[50];
    int sal;
    int hrs;
}emp;

emp e[len];

void getdetails();
int salary(int num);
void print(int num);

void (*ptr)();

void main()

{
    ptr = getdetails;
    ptr();
}

void getdetails()

{
    int num;
    int i;
    
    printf("Enter the number of Employees:\t");
    scanf("%d",&num);
    
    for(i = 0;i<num;i++)
    
    {
        printf("Enter Name of the Employee %d: \t",i+1);
        scanf("%s",e[i].name);
        printf("\nEnter the Salary of the Employee %d:\t",i+1);
        scanf("%d",&e[i].sal);
        printf("\nEnter the Number of Hours worked by Employee %d:\t",i+1);
        scanf("%d",&e[i].hrs);
        
    }
    
    print(num);
}

void print(int num)
{
    printf("\nEmployee Details\n");
    
    for(int i = 0;i<num;i++)
    
    {
        printf("\nEmployee %d",i+1);
        printf("\nName : %s",e[i].name);
        printf("\nSalary: %d",e[i].sal);
        printf("\nHours worked: %d\n",e[i].hrs);
        
    }
    
        
    printf("\nIncreased Salary of Employees \n");
    salary(num);
    
}

int salary(int num)
{
    for(int i = 0; i<num;i++)
    {
        
        if(e[i].hrs >= 8 && e[i].hrs < 10)
        {
            printf("\nSalary of Employee %d : %d",i+1,(50+e[i].sal));
        }
        
        if(e[i].hrs == 10)
        {
            printf("\nSalary of Employee %d: %d",i+1,(100+e[i].sal));
        }
    
        if(e[i].hrs > 10 && e[i].hrs >= 12 )
        {
            printf("\nSalary of Employee %d: %d",i+1,(150+e[i].sal));
        }
    }
    return 0;
}
