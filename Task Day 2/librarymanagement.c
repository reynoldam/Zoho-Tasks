#include<stdio.h>
#include<string.h>
#include<time.h>

#define Length 20

struct book{
    
    int book_id;
    char name[Length];
    char status[Length];
};

struct student{
    
    int stud_id;
    char name[Length];
    int book_id;
    time_t gettime;
    
};

struct book b[Length];
struct student s[Length];

void initialize();
void add_book();
void display_book();
void delete();
void admin();
int login();

void add_student();
void display_stud();
void allocate_book();

int cnt = 0;
int scnt = 0;

char user[Length] = "admin";
char pass[Length] = "pass";

void (*ptr)();
int (*ptr1)();

int main()
{
    initialize();
    return 0;
}


void initialize()
{
    int ch;
    
    do
    {
        printf("\n ----- Library -----");
        printf("\n 1. Admin");
        printf("\n 2. Display Books");
        printf("\n 9. Exit");
        printf("\n Enter Option : ");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1 :
            {
                admin();
                break;
            }
            case 2 :
            {
                display_book();
                break; 
            }
            case 9 :
            {
                printf("\n Thank You");
                break;
            }
            default :
            {
                printf("\n Invalid Input");
            }
        }
    }while(ch != 9);
    
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
            printf("\n 1. Add Books");
            printf("\n 2. Display Book List");
            printf("\n 3. Delete Book");
            printf("\n 4. Allocate Book");
            printf("\n 5. Add Student");
            printf("\n 6. Student List");
            printf("\n 9. Main Menu");
            printf("\n Enter Option : ");
            scanf("%d", &ch);
            switch(ch)
            {
                case 1 :
                {
                    ptr = add_book;
                    ptr();
                    
                    break;
                }
                case 2 :
                {
                    ptr = display_book;
                    ptr();
                    break;
                }
                case 3 :
                {
                    ptr = delete;
                    ptr();
                    break;
                }
                case 4:
                {
                    allocate_book();
                    break;
                }
                case 5 :
                {
                    add_student();
                    break;
                }
                case 6 :
                {
                    display_stud();
                    break;
                }
                case 9 :
                {
                    printf("\n Returning Main");
                    break;
                }
                default :
                {
                    printf("\n Invalid Input");
                }
                
                
            }
        }while(ch != 9);
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


void add_book()
{
    printf("\n Enter the Book Id : ");
    scanf("%d", &b[cnt].book_id);
    
    printf("\n Enter Book Name : ");
    scanf("%s", b[cnt].name);
    
    strcpy(b[cnt].status, "Available");
    
    cnt++;
}

void display_book()
{
    if (cnt == 0)
    {
        printf("\n No Books");
    }
    else
    {
        printf("\n The Books In Library : ");
        for(int i = 0; i < cnt; i++)
        {
            printf("\n -----Book %d-----", i+1);
            printf("\n Book Id : %d", b[i].book_id);
            printf("\n Book Name : %s", b[i].name);
            printf("\n Book Status : %s", b[i].status);
        }
    }
}

void delete()
{
    display_book();
    int id, i, flag = 0;
    
    printf("\n\n Enter the Book id to be deleted : ");
    scanf("%d", &id);
    
    for(i = 0; i < cnt; i++)
    {
        if (b[i].book_id == id)
        {
            flag = 1;
            break;
        }
    }
    
    if (flag == 1)
    {
        if (strcmp(b[i].status, "occupied") == 1)
        {
            printf("\n The book is occupied. Cant Delete the book.");
        }
        else
        {
            for(int j = i; j < cnt; j++)
            {
                b[j].book_id = b[j+1].book_id;
                strcpy(b[j].name, b[j+1].name);
                strcpy(b[j].status, b[j+1].status);
            }
            printf("\n The Book Id %d is Deleted", id);
        }
        
    }
    else
    {
        printf("\n Incorrect Book Id");
    }
    
    cnt--;
    
    
}

void add_student()
{
    
    printf("\n Enter the Student Id : ");
    scanf("%d", &s[scnt].stud_id);
    
    printf("\n Enter Student Name : ");
    scanf("%s", s[scnt].name);
    
    
    scnt++;
}

void display_stud()
{
    if (scnt == 0)
    {
        printf("\n No Student");
    }
    else
    {
        printf("\n The Student List : ");
        for(int i = 0; i < scnt; i++)
        {
            printf("\n -----Student %d-----", i+1);
            printf("\n Student Id : %d", s[i].stud_id);
            printf("\n Student Name : %s", s[i].name);
            
        }
    }
    
}

void allocate_book()
{
    display_book();
    int id, i, flag1 = 0;
    
    printf("\n Enter the book id : ");
    scanf("%d", &id);
    
    for(i = 0; i < cnt; i++)
    {
        if (b[i].book_id == id)
        {
            flag1 = 1;
            break;
        }
    }
    
    if (flag1 == 0)
    {
        printf("\n Invalid Book Id.");
    }
    
    if (flag1 == 1 && strcmp(b[i].status, "Available") == 0)
    {
       int std, j, flag2 = 0;
        time_t t;
    
        printf("\n Enter the Student id : ");
        scanf("%d", &std);
    
        for(int j = 0; j < scnt; j++)
        {
            if (s[j].stud_id == std)
            {
            
                flag2 = 1;
                break;
            }
        }
    
        if (flag2 == 0)
        {
        
            printf("\n Incorrect Studend ID");
    
        }
        else
        {
            s[j].book_id = b[i].book_id;
            s[j].gettime = time(&t);
            strcpy(b[i].status, "occupied");
            
            printf("\n The book is alloted");
            
        }
        
    }
    else if (flag1 == 1 && strcmp(b[i].status, "occupied") == 0)
    {
        
        printf("\n The Book is occupied.");
        
    }
    
    
    
    
    
}
