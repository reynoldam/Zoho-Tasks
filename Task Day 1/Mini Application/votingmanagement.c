#include<stdio.h>

void dashboard();
void castvote();
void voteconfirm(char *str[], int canch);
void result();
void lock();

int a1ab , a1cd, a2ef, a2gh, a2ij, lockflag;
char *area1str[10] = {"ab","cd"};
char *area2str[10] = {"ef","gh","ij"};

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
        printf("\n1.Cast Vote \n2.Results \n3.Lock \n99. Exit\n");
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
            case 99: {
                printf("Thank You");
                break;
            }
            default : {
                printf("Invalid Option. Choose the Correct option\n");
            }
        }
    }
    while (chc != 99);
    
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
        a1ab = a1cd = a2ef = a2gh = a2ij = 0;
        
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
        int canch;
        printf("\nSelect Your Area : \n1. Area--1\t2. Area--2\t3. Main Menu\n");
        scanf("%d", &ch);
        if (ch == 1)
        {   
            
            printf("\n----- Area - 1 ------\n");
            printf("Select the candidate you like to vote.\n1.ab\n2.cd\n");
            scanf("%d", &canch);
            ptr2 = voteconfirm;
            ptr2(area1str, canch);
        }
        else if (ch == 2)
        {
            
            printf("\n----- Area - 2 ------\n");
            printf("Select the candidate you like to vote.\n1.ef\n2.gh\n3.ij\n");
            scanf("%d", &canch);
            ptr2 = voteconfirm;
            ptr2(area2str, canch);
        }
    }
    else
        printf("\nElection Ended. Check Result!!\n\n");
}


void voteconfirm(char* str[], int canch)
{
    char con;
    printf("\nAre You Sure you want to vote for %s Candidate/party : (y/n):\n", str[canch-1]);
    scanf(" %c", &con);
    
    if (str[canch-1] == "ab" && con == 'y'){
        printf("Voted Successfully for party/candidate ab\n\n");
        a1ab++;
    }
    else if(str[canch-1] == "cd" && con == 'y')
    {
        printf("Voted Successfully for party/candidate cd\n\n");
        a1cd++;
    }
    else if(str[canch-1] == "ef" && con == 'y')
    {
        printf("Voted Successfully for party/candidate ef\n\n");
        a2ef++;
    }
    else if(str[canch-1] == "gh" && con == 'y')
    {
        printf("Voted Successfully for party/candidate gh\n\n");
        a2gh++;
    }
    else if(str[canch-1] == "ij" && con == 'y')
    {
        printf("Voted Successfully for party/candidate ij\n\n");
        a2ij++;
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
            
            printf("Party/Candidate %s's vote count : %d\n", area1str[0], a1ab);
            printf("Party/Candidate %s's Vote count : %d\n\n", area1str[1],a1cd);
            
            if (a1ab > a1cd){
                printf("The Winner is %s\n\n", area1str[0]);
            }
            else if (a1ab == a1cd){
                printf("Both Party secured same amount of Vote\n\n");
            }
            else{
                printf("The Winner is %s\n\n", area1str[1]);
            }
            
            
        }
        else if (resch == 2)
        {
            printf("Party/Candidate %s's vote count : %d\n", area2str[0], a2ef);
            printf("Party/Candidate %s's Vote count : %d\n", area2str[1], a2gh);
            printf("Party/Candidate %s's Vote count : %d\n", area2str[2], a2ij);
            
            if (a2ef > a2gh && a2ef > a2ij)
            {
                printf("\nThe Winner is %s\n\n", area2str[0]);
            }
            else if (a2gh > a2ij && a2gh > a2ef)
            {
                printf("\nThe Winner is %s\n\n", area2str[1]);
            }
            else if (a2gh < a2ij && a2ij > a2ef)
            {
                printf("\nThe Winner is %s\n\n", area2str[2]);
            }
            else if (a2ef == a2gh && a2gh == a2ij)
            {
                printf("\nAll Parties secured same amount of Vote\n\n");
            }
            else if (a2ef == a2gh && a2gh != a2ij)
            {
                printf("\nBoth %s and %s Secured same Vote\n\n", area2str[0], area2str[1]);
            }
            else if (a2gh == a2ij && a2gh != a2ef)
            {
                printf("\nBoth %s and %s Secured same Vote\n\n", area2str[1], area2str[2]);
            }
            else if (a2ef == a2ij && a2gh != a2ef)
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