#include<stdio.h>
#include<string.h>

#include<stdlib.h>

struct course{
char name[20];
int regno;
char gender[10];
char dob[10];
char blood[10];
int marks;
};

void create(struct course *,int);
void display(struct course *,int);
int net(int );
int calculator(int,int,int);
//struct course* remove(struct course *);

int main(){
int n,flag,users;
struct course *ptr;
do{
printf("\n1. Enter 1 for creating\n");
printf("2. Enter 2 for display\n");
// printf("3. Enter 3 for delete\n");
printf(" Enter value ");
scanf("%d",&n);
switch(n){
case 1:
printf("number of users ");
scanf("%d",&users);
ptr = (struct course *)malloc(users*sizeof(struct course));
if(ptr!=NULL){
   create(ptr,users);
};
   break;
case 2:display(ptr,users);
      break;
// case 3:remove(ptr);
// break;
default:printf("input not entered");
       exit(1);
}
printf("\n\nto continue enter 1 or discard enter 0 - ");
scanf("%d",&flag);
}
while(flag);
}
void create(struct course *student,int users){
   struct course *accept=student;
   for(int i=1;i<=users;i++){
   printf("enter the values of %d candidate",i);
printf("\nenter regno ");
scanf("%d",&accept->regno);
printf("\nenter name ");
scanf("%s",accept->name);
printf("\nenter gender ");
scanf("%s",accept->gender);
printf("\nenter blood ");
scanf("%s",accept->blood);
printf("\nenter dob ");
scanf("%s",accept->dob);
printf("\nenter marks ");
accept->marks=net(i);
accept++;
}
}
void display(struct course *student,int users){
struct course *accept=student;
for(int i=1;i<=users;i++){
printf("\n%d - candidate\n",i);
printf("regno %d\n",accept->regno);
printf("name %s\n",accept->name);
printf("gender %s\n",accept->gender);
printf("blood %s\n",accept->blood);
printf("dob %s\n",accept->dob);
printf("marks %d",accept->marks);
printf("\n\n");
accept++;
}
}
//struct course* remove(struct course *student){
// struct course *accept=student;
// char name[20];
// int i=0;
// printf("enter candidate name to their id \n");
// scanf("%s",name);
// for(i=0;(accept+i)!='\0';i++){
// if((accept+i)->name==name){
// student=(accept+i);
// printf("candidate removed");
// }
// }
// return student;
//}
int net(int i){
int tamil,english,maths;
printf("start to enter marks of %d candidate : ",i);
printf("\nenter tamil marks obtained out of 100 - ");
scanf("%d",&tamil);
printf("\nenter english marks obtained out of 100 - ");
scanf("%d",&english);
printf("\nenter maths marks obtained out of 100 - ");
scanf("%d",&maths);
return calculator(tamil,english,maths);
}
int calculator(int a,int b,int c){
int sum=a+b+c;
sum=sum/3;
return sum;
}
