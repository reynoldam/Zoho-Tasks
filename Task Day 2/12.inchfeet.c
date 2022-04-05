#include<stdio.h>

void getinputs();
void calculate();
void display(float inches,float feets);

void (*p)();
struct inch
{
    float inch1;
    float inch2;
};
struct inch i;

void main()
{
    p = getinputs;
    p();
}

void getinputs()
{
    printf("Enter the distance(inch) 1:\t");
    scanf("%f",&i.inch1);
    printf("Enter the distance(inch) 2:\t");
    scanf("%f",&i.inch2);
    calculate();
}

void calculate()
{
    float inches,feets;
    inches = i.inch1 + i.inch2;
    feets = 0.0833 * inches;
    display(inches,feets);
}

void display(float inches,float feets)
{
    printf("\nThe Total Distance  in Inches:\t%.2f\n",inches);
    
    printf("\nThe Total Distance in Feet:\t%.2f\n",feets);
}
