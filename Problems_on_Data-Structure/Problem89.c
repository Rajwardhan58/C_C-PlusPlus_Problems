//1.write a program which returns largest element from singly linear linked list.

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

int LargestNo(PNODE Head)
{
    int iMax=Head->data;
    PNODE temp=Head;
    while(temp!=NULL)
    {
        if(iMax<temp->data)
        {
            iMax=temp->data;
        }
        temp=temp->next;
    }
    return iMax;
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
    InsertLast(&First,31);
    InsertLast(&First,41);
    InsertLast(&First,51);
    
    int iCnt=Count(First);
    printf("count of nodes are %d\n",iCnt);
    Display(First);

    int iMax=LargestNo(First);
    printf("Largest No is : %d\n",iMax);
    return 0;
}