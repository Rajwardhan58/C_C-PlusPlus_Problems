//write a program which display all palindrome elements of singly linked list

//input 12321
//output true


#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}NODE,*PNODE,**PPNODE;

void InsertLast(PPNODE Head,int iNo)
{
    PNODE newn=(PNODE)malloc(sizeof(NODE));
    newn->data=iNo;
    newn->next=NULL;

    if(*Head==NULL)
    {
        *Head=newn;
    }
    else
    {
        PNODE temp=(*Head);
        while((temp)->next!=NULL)
        {
            (temp)=(temp)->next;
        }
        (temp)->next=newn;
    }
}
void PalindromeDigit(PNODE Head)
{
    int iMult=0,no=0;
    int temp=0;
    while(Head!=NULL)
    {
        iMult=0;
        no=Head->data;
        temp=Head->data;
        while(no!=0)
        {
            iMult=iMult*10+(no%10);

            no=no/10;
        }
        if(temp==iMult)
        {
            printf("%d\t",iMult);
        }
        Head=Head->next;
    }
    printf("\n");
}

int Count(PNODE Head)
{
    int CountNode=0;
    PNODE temp=Head;
    while(temp!=NULL)
    {
        temp=temp->next;
        CountNode++;
    }
    return CountNode;
}

void Display(PNODE Head)
{
    PNODE temp=Head;
    printf("data in linked list is\n");
    while(temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

int main()
{
    PNODE First=NULL;

    InsertLast(&First,456);
    InsertLast(&First,234);
    InsertLast(&First,56);
    InsertLast(&First,12321);
    InsertLast(&First,345);
    
    int iCnt=Count(First);
    printf("count of nodes are %d\n",iCnt);
    Display(First);
    PalindromeDigit(First);
    
    return 0;
}