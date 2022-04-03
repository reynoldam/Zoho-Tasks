#include<stdio.h>
#include<stdlib.h>
#define len 30
void getinputs();
void display(int num);
void sorting(int num);

void (*p)();

struct students

{
    char name[len];
    int roll;
    char dep[len];
    float marks;

};

struct students *arr[len];

void main()

{
    p = getinputs;
    p();
}

void getinputs()
{
    int num;
    printf("\nEnter the Number of Student:\n");
    scanf("%d",&num);
    for(int i=0;i<num;i++)
    {
        arr[i] = (struct students*)malloc(sizeof(struct students));
        
        printf("\nEnter the student name %d:\n",i+1);
        scanf("%s",arr[i]->name);
        
        printf("\nEnter the Register Number:\n");
        scanf("%d",&arr[i]->roll);
    
        printf("\nEnter the Department\n");
        scanf("%s",arr[i]->dep);
    
        printf("\nEnter the marks obtained:\n");
        scanf("%f",&arr[i]->marks);
        
    }
    display(num);
    sorting(num);
    
}

void display(int num)

{
    printf("------------------------------------------------------");
    printf("\nStudent details:\n");
    for(int i = 0;i < num; i++)
    {
        printf("\nStudent Number : %d\n", i + 1);
        printf("\n");
        printf("\nStudent name:%s\n",arr[i]->name);
        printf("\n");
        printf("\nRegister Number:%d\n",arr[i]->roll);
        printf("\n");
        printf("\nDepartment:%s\n",arr[i]->dep);
        printf("\n");
        printf("\nMarks Obtained: %.2f\n",arr[i]->marks);

    }
    printf("------------------------------------------------------");
    printf("\nStudent Details according to the highest marks:\n");
    sorting(num);
    for(int i = 0; i<num; i++)
    {
        printf("\nName:%s\n",arr[i]->name);
        printf("\nRegister Number:%d\n",arr[i]->roll);
        printf("\nDepartment:%s\n",arr[i]->dep);
        printf("\nMarks obtained:%.2f\n",arr[i]->marks);
        
    }
    

}

void sorting(int num)

{
    int i,j,val;
    for(i=0;i<num;i++)
    {
        for(j = i+1;j<num;j++)
        {
            if(arr[i]->marks < arr[j]->marks)
            {
                val = arr[i];
                arr[i] = arr[j];
                arr[j] = val;
            }
            
        }
        
    }
     
    for(int i = 0; i<num; i++)
    
    {
        printf("\nName:%s\n",arr[i]->name);
        
        printf("\nRegister Number:%d\n",arr[i]->roll);
        
        printf("\nDepartment:%s\n",arr[i]->dep);
        
        printf("\nMarks obtained:%.2f\n",arr[i]->marks);
        
    }
    
}