//1.write a program which displays all elements which are prime from singly linearlinked list

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
void PrimeNo(PNODE Head)
{
    int iCnt=0;
    while(Head!=NULL)
    {
        iCnt=0;
        for(int i=2;i<=Head->data/2;i++)
        {
            if(Head->data%i==0)
            {
                iCnt++;
            }
        }
        if(iCnt==0)
        {
            printf("%d\t",Head->data);
        }
        Head=Head->next;
    }
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

    InsertLast(&First,11);
    InsertLast(&First,21);
    InsertLast(&First,6);
    InsertLast(&First,41);
    InsertLast(&First,51);
    
    int iCnt=Count(First);
    printf("count of nodes are %d\n",iCnt);
    Display(First);
    PrimeNo(First);

    
    return 0;
}