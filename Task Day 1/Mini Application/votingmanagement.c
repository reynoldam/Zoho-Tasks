#include<stdio.h>

void dashboard();
void castvote();
void voteconfirm(char *str[], int canch);
void result();
void lock();

int a11 , a12, a21, a22, a23, lockflag;
char *area1str[10] = {"Reynold","Amrith"};
char *area2str[10] = {"Brad","Smith","Nick"};

void (*ptr1)();
void (*ptr2)(char *[], int);

int main()
{
    ptr1 = dashboard;
    ptr1();
    return 0;
}


void dashboard()
{
    
    int chc;
    
    do{
        
        printf("*****  Welcome to 2022 Election  *****");
        printf("\n1.Cast Vote \n2.Results \n3.Lock \n4. Exit\n");
        scanf("%d", &chc);
        
        switch(chc)
        {
            case 1: { 
                ptr1 = castvote;
                ptr1();
                break;
            }
            case 2: {
                ptr1 = result;
                ptr1();
                break;
            }
            case 3: {
                ptr1 = lock;
                ptr1();
                break;
            }
            case 4: {
                printf("Thank You");
                break;
            }
            default : {
                printf("Invalid Option. Choose the Correct option\n");
            }
        }
    }
    while (chc != 4);
    
}


void lock()
{
    char lc;
    printf("\nAre You sure want to Lock/Release the Election : \n( l for Lock/ r for Release)\n");
    scanf(" %c", &lc);
    
    if (lc == 'l')
    {
        lockflag = 1;
        printf("The Election is Successfully Closed.\n\n");
    }
    else if (lc == 'r')
    {
        lockflag = 0;
        printf("Voting is Open.\n\n");
        a11 = a12 = a21 = a22 = a23 = 0;
        
    }
    else
    {
        printf("Invalid Input.\n\n");
    }
}


void castvote()
{
    if (lockflag == 0)
    {
        int ch;
        int cand;
        printf("\nSelect Your Area : \n1. Area--1\t2. Area--2\t3. Main Menu\n");
        scanf("%d", &ch);
        if (ch == 1)
        {   
            
            printf("\n----- Area - 1 ------\n");
            printf("Select the candidate you like to vote.\n1.Reynold\n2.Amrith\n");
            scanf("%d", &cand);
            ptr2 = voteconfirm;
            ptr2(area1str, cand);
        }
        else if (ch == 2)
        {
            
            printf("\n----- Area - 2 ------\n");
            printf("Select the candidate you like to vote.\n1.Brad\n2.Smith\n3.Nick\n");
            scanf("%d", &cand);
            ptr2 = voteconfirm;
            ptr2(area2str, cand);
        }
    }
    else
        printf("\nElection Ended. Check Result!!\n\n");
}


void voteconfirm(char* str[], int cand)
{
    char con;
    printf("\nAre You Sure you want to vote for %s Candidate/party : (y/n):\n", str[cand-1]);
    scanf(" %c", &con);
    
    if (str[cand-1] == "Reynold" && con == 'y'){
        printf("Voted Successfully for party/candidate Reynold\n\n");
        a11++;
    }
    else if(str[cand-1] == "Amrith" && con == 'y')
    {
        printf("Voted Successfully for party/candidate Amrith\n\n");
        a12++;
    }
    else if(str[cand-1] == "Brad" && con == 'y')
    {
        printf("Voted Successfully for party/candidate Brad\n\n");
        a21++;
    }
    else if(str[cand-1] == "Smith" && con == 'y')
    {
        printf("Voted Successfully for party/candidate Smith\n\n");
        a22++;
    }
    else if(str[cand-1] == "Nick" && con == 'y')
    {
        printf("Voted Successfully for party/candidate Nick\n\n");
        a23++;
    }
    else if(con == 'n')
    {
        printf("Vote cancelled\n\n");
    }
    else
    {
        printf("Invalid Input\n\n");
    }
}


void result()
{
    int resch;
    
    if (lockflag == 1)
    {
        printf("\nElection Results\nSelect The Area : \n");
        printf("1.Area-1\t2.Area-2\t3.Main Menu\n");
        scanf("%d", &resch);
        if (resch == 1)
        {
            
            printf("Party/Candidate %s's vote count : %d\n", area1str[0], a11);
            printf("Party/Candidate %s's Vote count : %d\n\n", area1str[1],a12);
            
            if (a11 > a12){
                printf("The Winner is %s\n\n", area1str[0]);
            }
            else if (a11 == a12){
                printf("Both Party secured same amount of Vote\n\n");
            }
            else{
                printf("The Winner is %s\n\n", area1str[1]);
            }
            
            
        }
        else if (resch == 2)
        {
            printf("Party/Candidate %s's vote count : %d\n", area2str[0], a21);
            printf("Party/Candidate %s's Vote count : %d\n", area2str[1], a22);
            printf("Party/Candidate %s's Vote count : %d\n", area2str[2], a23);
            
            if (a21 > a22 && a21 > a23)
            {
                printf("\nThe Winner is %s\n\n", area2str[0]);
            }
            else if (a22 > a23 && a22 > a21)
            {
                printf("\nThe Winner is %s\n\n", area2str[1]);
            }
            else if (a22 < a23 && a23 > a21)
            {
                printf("\nThe Winner is %s\n\n", area2str[2]);
            }
            else if (a21 == a22 && a22 == a23)
            {
                printf("\nAll Parties secured same amount of Vote\n\n");
            }
            else if (a21 == a22 && a22 != a23)
            {
                printf("\nBoth %s and %s Secured same Vote\n\n", area2str[0], area2str[1]);
            }
            else if (a22 == a23 && a22 != a21)
            {
                printf("\nBoth %s and %s Secured same Vote\n\n", area2str[1], area2str[2]);
            }
            else if (a21 == a23 && a22 != a21)
            {
                printf("\nBoth %s and %s Secured same Vote\n\n", area2str[0], area2str[2]);
            }
            
        }
        else if (resch == 3)
        {
            printf("\nReturning Main.\n\n");
        }
        else
        {
            printf("\nInvalid Request. Returning Main\n\n");
        }
    }
    else
    {
        printf("\nThe Election is Still going on.\n\n");
    }
}
