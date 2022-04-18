#include<stdio.h>

void FindMonth(int month);

int main()
{
    int month;
    
    printf("Enter Month Number\n");
    scanf("%d",&month);
    
    FindMonth(month);
    
    return 0;
}
void FindMonth(int month){
    switch(month){
        case 1:printf("JANUARY");
        break;
        case 2:printf("FEBRUARY");
        break;
        case 3:printf("MARCH");
        break;
        case 4:printf("APRIL");
        break;
        case 5:printf("MAY");
        break;
        case 6:printf("JUNE");
        break;
        case 7:printf("JULY");
        break;
        case 8:printf("AUGUST");
        break;
        case 9:printf("SEPTEMBER");
        break;
        case 10:printf("OCTOBER");
        break;
        case 11:printf("NOVEMBER");
        break;
        case 12:printf("DECEMBER");
        break;
    }
}
