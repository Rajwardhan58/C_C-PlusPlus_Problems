//write a program which reverse each element of singly linked list

//input : 1234
//output: 4321

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
void ReverseDigit(PNODE Head)
{
    int iMult=0;
    while(Head!=NULL)
    {
        iMult=0;
        while(Head->data!=0)
        {
            iMult=iMult*10+(Head->data%10);

            Head->data=Head->data/10;
        }
        Head->data=iMult;
        printf("%d\t",iMult);
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
    InsertLast(&First,123456);
    InsertLast(&First,345);
    
    int iCnt=Count(First);
    printf("count of nodes are %d\n",iCnt);
    Display(First);
    ReverseDigit(First);
    Display(First);
    
    return 0;
}