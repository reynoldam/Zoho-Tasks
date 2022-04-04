#include<stdio.h>
#define length 10

void Start();
void Display();
void push();
void pop();
void peep();
void (*ptr)();
int top = -1;
int arr[length];
int main(){
    ptr = Start;
    ptr();
    return 0;
}
void Start(){
    int num;
    do{
        printf("\nWelcome!\nSelect option");
        printf("\n1-Push");
        printf("\n2-Pop");
        printf("\n3-Peep");
        printf("\n4-Display");
        printf("\n5-Exit\n");
        scanf("%d",&num);
        switch(num){
            case 1:
            ptr = push;
            ptr();
            break;
            case 2:
            ptr = pop;
            ptr();
            break;
            case 3:
            ptr = peep;
            ptr();
            break;
            case 4:
            ptr= Display;
            ptr();
            break;
                default:
                printf("\nThank You\n");
            
        }
    }
    while (num!=5);
}
void Display(){
    if (top == -1){
        printf("\nStack is Empty\n");
    }
    else{
        for (int i = top; i >= 0 ; i--){
            printf("\n%d\n",arr[i]);
            printf("-");
        }
    }
    
    }
    
void push(){
    int value;
    printf("Enter the value ");
    scanf("%d",&value);
    if(top == length - 1){
        printf("Stack is Overflow");
    }
    else{
        top++;
        arr[top] = value;
        printf("The Value %d pushed into the Stack ",value);
    }
}
void pop(){
    int value;
    if(top == -1){
        printf("The Stack is Underflow");
    }
    else{
        value = arr[top];
        top--;
        printf("The value %d has been removed from Stack",value);
    }
    
}
void peep(){
    if(top == -1){
        printf("Stack is Empty");
        
    }
    else{
        printf("The First Number present on top is %d",arr[top]);
    }
}