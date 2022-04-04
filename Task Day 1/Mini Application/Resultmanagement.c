#include<stdio.h>
#include<string.h>

#define Length 20

struct marks{
    
    int c;
    int cpp;
    int java;
};

struct student{
    
    int roll_no;
    char student_name[Length];
    struct marks data;
    
};

struct student arr[Length];

void initialize();
void admin();

int login();

void result();
void grade();

void add_student();

int student_list();

void update_student();


void (*ptr)();
int (*ptr1)();

int student_size = 0;
char user[Length] = "admin";
char pass[Length] = "pass";

int main()
{
    ptr = initialize;
    ptr();
    
    return 0;
}

void initialize()
{
    int ch;
    
    do
    {
        printf("\n\n ***** RESULT MANAGEMENT ***** ");
        printf("\n 1. Admin ");
        printf("\n 2. Result");
        printf("\n 3. Exit");
        printf("\n Enter Option : ");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1 :
            {
                ptr = admin;
                ptr();
                
                break;
            }
            case 2 :
            {
                ptr = result;
                ptr();
                break;
            }
            case 3 :
            {
                printf("\n Thank You");
                break;
            }
            default :
            {
                printf("\n Invalid Input");
            }
        }
        
    }while(ch != 3);
}

void result()
{
    int i, rn, flag = 0;
    
    printf("\n Enter the Roll Number : ");
    scanf("%d", &rn);
    
    for(i = 0; i < student_size; i++)
    {
        if (rn == arr[i].roll_no)
        {
            flag = 1;
            break;
        }
    }
    
    if (flag == 1)
    {
        int tot = arr[i].data.c + arr[i].data.cpp + arr[i].data.java;
        printf("\n ----- RESULT -----");
        printf("\n ROLL NO : %d", arr[i].roll_no);
        printf("\n NAME : %s", arr[i].student_name);
        printf("\n ----- Marks -----");
        printf("\n C : %d", arr[i].data.c);
        printf("\n C++ : %d", arr[i].data.cpp);
        printf("\n JAVA : %d", arr[i].data.java);
        printf("\n TOTAL Marks : %d / 300", tot);
        printf("\n Grade : ");
        grade(tot);
    }
    else
    {
        printf("\n Roll Number Not Found.");
    }
    
    
}

void admin()
{
    ptr1 = login;
    int flag = ptr1();
    
    if (flag == 1)
    {
        int ch;
        do
        {
            printf("\n\n ***** ADMIN *****");
            printf("\n 1. Add Student");
            printf("\n 2. Student List");
            printf("\n 3. Update Student");
            printf("\n 4. Exit");
            printf("\n Enter Option : ");
            scanf("%d", &ch);
            switch(ch)
            {
                case 1 :
                {
                    ptr = add_student;
                    ptr();
                    
                    break;
                }
                case 2 :
                {
                    ptr1 = student_list;
                    int flag = ptr1();
                    break;
                }
                case 3 :
                {
                    ptr = update_student;
                    ptr();
                    break;
                }
                case 4:
                {
                    printf("\n Returning Main");
                    break;
                }
                default :
                {
                    printf("\n Invalid Input");
                }
                
                
            }
        }while(ch != 4);
    }
}

int login()
{
    char u[Length], p[Length], flag = 0;
    
    printf("\n Enter User Name : ");
    scanf("%s", u);
    
    printf("\n Enter Password : ");
    scanf("%s", p);
    
    if (strcmp(u,user)==0)
    {
        if (strcmp(p, pass)==0)
        {
            printf("\n Login Success.");
            flag = 1;
        }
        else
        {
            printf("\n Login Password Wrong.");
        }
    }
    else
    {
        printf("\n Login Username Invalid");
    }
    
    return flag;
}


void add_student()
{
    int n;
    
    printf("\n Enter the Number of Students to be added : ");
    scanf("%d", &n);
    int t = student_size, cnt = 1;
    for(int i = t; i < n+t; i++)
    {
        printf("\n Enter Details of Student %d", cnt);
        printf("\n Enter Student roll_no : ");
        scanf("%d", &arr[i].roll_no);
        printf("\n Enter Student Name : ");
        scanf("%s", arr[i].student_name);
        printf("\n -----Enter Marks-----");
        printf("\n Enter C Marks : ");
        scanf("%d", &arr[i].data.c);
        printf("\n Enter C++ Marks : ");
        scanf("%d", &arr[i].data.cpp);
        printf("\n Enter Java Marks : ");
        scanf("%d", &arr[i].data.java);
        student_size++;
        cnt++;
    }
    
}

int student_list()
{
    int flag = 0;
    if (student_size == 0){
        printf("\n The list is Empty. ");
        return flag = 0;
    }
    else{
        printf("\n THE STUDENT LIST : ");
    
        for(int i = 0; i < student_size; i++)
        {
            
            printf("\n\n STUDENT %d", i+1);
            printf("\n ROLL NO : %d", arr[i].roll_no);
            printf("\n NAME : %s", arr[i].student_name);
            printf("\n ----- Marks -----");
            printf("\n C : %d", arr[i].data.c);
            printf("\n C++ : %d", arr[i].data.cpp);
            printf("\n JAVA : %d", arr[i].data.java);
        }
        return flag = 1;
        
    }
}

void update_student()
{
    ptr1 = student_list;
    int flag = ptr1();
    int f, rn, i;
    if (flag == 1){
        
        printf("\n Enter the roll_no to Update : ");
        scanf("%d", &rn);
        
        for(i = 0; i < student_size; i++)
        {
            if (rn == arr[i].roll_no)
            {
                f = 1;
                break;
            }
        }
    }
    
    if (f == 1)
    {
        printf("\n ----- OLD DETAILS ----- \n");
        printf("\n ROLL NO : %d", arr[i].roll_no);
        printf("\n NAME : %s", arr[i].student_name);
        printf("\n ----- Marks -----");
        printf("\n C : %d", arr[i].data.c);
        printf("\n C++ : %d", arr[i].data.cpp);
        printf("\n JAVA : %d", arr[i].data.java);
                
        printf("\n ----- NEW DETAILS -----\n");
        printf("\n Enter Student roll_no : ");
        scanf("%d", &arr[i].roll_no);
        printf("\n Enter Student Name : ");
        scanf("%s", arr[i].student_name);
        printf("\n -----Enter Marks-----");
        printf("\n Enter C Marks : ");
        scanf("%d", &arr[i].data.c);
        printf("\n Enter C++ Marks : ");
        scanf("%d", &arr[i].data.cpp);
        printf("\n Enter Java Marks : ");
        scanf("%d", &arr[i].data.java);
    }
    else{
        printf("\n Roll Number Not Found");
    }
}

void grade(int t)
{
    if (t >= 275)
    {
        printf("A");
    }
    else if(t >= 250)
    {
        printf("b");
    }
    else if(t >= 225){
        printf("C");
    }
    else if (t >= 200){
        printf("D");
    }
    else if (t >= 175){
        printf("E");
    }
    else {
        printf("F");
    }
    
}
