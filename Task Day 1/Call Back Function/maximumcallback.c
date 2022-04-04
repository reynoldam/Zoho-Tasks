#include <stdio.h>
#include <stdlib.h>



int max(int x,int y){
    if(x>y){
        printf("%d",x);
    }else{
        printf("%d",y);
    }

}
int display(int (*p)(int,int)){
    p(10,7);
}
int main()
{
    display(max);

}