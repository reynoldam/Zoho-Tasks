#include<stdio.h>
#include<stdlib.h>
#define len 30
void getinputs();
void display(int num);

void (*p)();

struct product
{
    char name[len];
    int batch;
    int id;
    int ex_month;
    int ex_year;
};

struct product *arr[len];

void main()
{
    p = getinputs;
    p();
}

void getinputs()
{
    int num;
    printf("Welcome!!!\n");
    printf("Enter the Number of Products:\n");
    scanf("%d",&num);
    for(int i=0;i<num;i++)
    {
        arr[i] = (struct product*)malloc(sizeof(struct product));
        printf("Enter the product name:\n");
        
        scanf("%s",arr[i]->name);
        
        printf("Enter the Product ID:\n");
        scanf("%d",&arr[i]->id);
    
        printf("Enter the Batch number:\n");
        scanf("%d",&arr[i]->batch);
    
        printf("Enter expiry month of the product:\n");
        scanf("%d",&arr[i]->ex_month);
    
        printf("Enter the Expiry year of the product:\n");
        scanf("%d",&arr[i]->ex_year);
        
    }
    display(num);
    
}

void display(int num)
{
    printf("Product details:\n");
    for(int i = 0;i < num; i++)
    {
        printf("Product : %d\n", i + 1);
        
        printf("Product Name:%s\n",arr[i]->name);
        
        printf("Unique ID Number:%d\n",arr[i]->id);
        
        printf("Batch Number:%d\n",arr[i]->batch);
        
        printf("Expires on: %d / %d\n",arr[i]->ex_month,arr[i]->ex_year);

    }
    
    
}