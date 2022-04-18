#include<stdio.h>


int main()
{
    int num = 0, total=500, sum=0;
    float per;

    printf("\n Enter Marks of 5 Subjects out of 100 : ");

    for(int i = 0; i < 5; i++)
    {
        printf("\n\n Enter Mark %d : ", i+1);
        scanf("%d", &num);
        sum += num;
    }

    printf("\n Sum of 5 Subjects is: %d\n", sum);

    per = (sum * 100/total) ;

    printf("\n Percentage is: %f",per);
    printf("\n\n Grade : ");
    if(per>80){
        printf("A+");
    }
    else if(per>=65 && per<=80){
        printf("A");
    }
    else if(per>=50 && per<=65){
        printf("B");
    }
    else if(per>=42 && per<=50){
        printf("C");
    }
    else if(per<42){
        printf("FAIL");
    }
    return 0;
}
