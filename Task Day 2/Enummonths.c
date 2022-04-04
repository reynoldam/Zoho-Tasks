#include<stdio.h>
#define length 100

enum months{Jan=1,Feb,Mar,April,May,June,July,August,September,October,November,December};
int main(){
    char *arr[length] = {"Jan","Feb","Mar","April","May","June","July","August","September","October","November","December"};
    for(int i = Jan;i<=December;i++){
        printf("%s = %d\n",arr[i-1],i);
    }
    return 0;
}
    