//write a program which display smallest digits of all digits of all elements of singly linked list

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
void SmallDigit(PNODE Head)
{
    int no=0;
    int iMin=0;
    while(Head!=NULL)
    {
        iMin=9;
        no=Head->data;
        while(no!=0)
        {   
            if(iMin>no%10)
            {
                iMin=no%10;
            }
            no=no/10;
        }
        printf("%d\t",iMin);
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
    SmallDigit(First);
    
    return 0;
}