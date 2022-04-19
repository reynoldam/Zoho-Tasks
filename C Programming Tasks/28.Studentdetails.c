#include<stdio.h>
#define len 20

typedef struct student
{
    int id;
    char firstname[len];
    char lastname[len];
    char dept[len];
    
}stud;

stud s[len];

void getdetails();
void studentdetails(int num);

void (*p)();

void main()
{
    p = getdetails;
    p();
    
}

void getdetails()
{
    int num;
    
    printf("Enter the number of students:");
    scanf("%d",&num);
    
    for(int i = 0;i<num;i++)
    {
        printf("\nEnter the (Student %d) First name:\t",i+1);
        scanf("%s",s[i].firstname);
        printf("\nEnter the (Student %d) Last Name:\t",i+1);
        scanf("%s",s[i].lastname);
        printf("\nEnter the (Student %d) Department:\t",i+1);
        scanf("%s",s[i].dept);
        printf("\nEnter the (Student %d) Register Number:\t",i+1);
        scanf("%d",&s[i].id);
    }
    
 studentdetails(num);
 
}

void studentdetails(int num)
{
    FILE *fdet;
    
    fdet = fopen("Studentdetails.txt","w"); 
    
    for(int i = 0;i<num;i++)
    
    {
        fprintf(fdet,"\nStudent %d Details\n",i+1);
        fprintf(fdet,"\nFirst Name : %s\n",s[i].firstname);
        fprintf(fdet,"\nLast Name: %s\n",s[i].lastname);
        fprintf(fdet,"\nDepartment: %s\n",s[i].dept);
        fprintf(fdet,"\nRegister Number: %d",s[i].id);
        
    }
    fclose(fdet);
    
}
