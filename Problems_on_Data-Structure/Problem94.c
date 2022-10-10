//1.write a program which returns second maximum elements from singly linearlinked list

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
int SecMaximum(PNODE Head)
{
    int Max=Head->data,secMax=Head->next->data;
    while(Head->next!=NULL)
    {
        if(Head->data<Head->next->data)
        {
            if(Max<Head->next->data)
            {
                secMax=Max;
                Max=Head->next->data;
            }
            else if(secMax<Head->next->data)
            {
                secMax=Head->next->data;
            }
            if(secMax<Head->data)
            {
                secMax=Head->data;
                
            }
            
        }
        else if(Head->data>Head->next->data)
        {
            if(Max<Head->data)
            {
                secMax=Max;
                Max=Head->data;
            }
            if(secMax<Head->next->data)
            {
                secMax=Head->next->data;
            }
        }
        Head=Head->next;
    }
    return secMax;
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

    InsertLast(&First,4);
    InsertLast(&First,2);
    InsertLast(&First,5);
    InsertLast(&First,1);
    InsertLast(&First,3);
    
    int iCnt=Count(First);
    printf("count of nodes are %d\n",iCnt);
    Display(First);
    int iNo=SecMaximum(First);
    printf("%d\n",iNo);

    
    return 0;
}