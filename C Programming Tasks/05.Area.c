#include<stdio.h>

void area(int opt);

int main()
{
    int opt;
    
    do{
    printf("\n AREA ");
    printf("\n [11]. CIRCLE ");
    printf("\n [22]. RECTANGLE");
    printf("\n [33]. SQUARE");
    printf("\n [44]. TRIANGLE");
    printf("\n [55]. EXIT");
    printf("\n Enter option : ");
    scanf("%d", &opt);
    
    area(opt);
    
    }while(opt != 55);
    return 0;
}
void area(int opt){
    
    switch(opt){
        case 11:
        {
            printf("\n Area of Circle. ");
            int r;
            
            printf("\n Enter Radius : ");
            scanf("%d", &r);
            
            printf("Area of Circle is : %.2f", (3.14 * (r*r)));
            
            break;
        }
        case 22:
        {
            printf("\n Area of RECTANGLE. ");
            int l, b;
            
            printf("\n Enter length and breath : ");
            scanf("%d %d", &l, &b);
            
            printf("Area of Rectangle is : %d", l*b);
            
            break;
        }
        case 33:
        {
            printf("\n Area of SQUARE. ");
            int l;
            
            printf("\n Enter Side Lenght: ");
            scanf("%d", &l);
            
            printf("Area of SQUARE is : %d", l*l);
            
            break;
        }
        case 44:
        {
            printf("\n Area of TRIANGLE. ");
            int l, b, h;
            
            printf("\n Enter length breath and height : ");
            scanf("%d %d %d", &l, &b, &h);
            
            printf("Area of TRIANGLE is : %.2f", 0.5*(l*b*h));
            
            break;
        }
        case 55 :
            printf("\n Thank you");
            break;
        default :
        {
            printf("\n Invalid Input");
        }
    }
}
