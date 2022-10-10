//write a program which display addition of digits of element from singly linear linked list

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
void DigitSum(PNODE Head)
{
    int no=0,iSum=0;
    while(Head!=NULL)
    {
        iSum=0;
        no=Head->data;
        while(no!=0)
        {
            iSum=iSum+(no%10);
            no=no/10;
        }
        printf("%d\t",iSum);
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

    InsertLast(&First,44);
    InsertLast(&First,222);
    InsertLast(&First,55);
    InsertLast(&First,11111);
    InsertLast(&First,333);
    
    int iCnt=Count(First);
    printf("count of nodes are %d\n",iCnt);
    Display(First);
    DigitSum(First);
    
    return 0;
}