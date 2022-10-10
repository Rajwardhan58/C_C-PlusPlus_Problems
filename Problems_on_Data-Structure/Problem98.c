//write a program which display product of all digits of all elements of singly linked list

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
void ProductDigit(PNODE Head)
{
    int iMult=0,no=0;
    while(Head!=NULL)
    {
        iMult=1;
        no=Head->data;
        while(no!=0)
        {   
            if(no%10!=0)
            {
                iMult=iMult*(no%10);
            }
            no=no/10;
        }
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
    InsertLast(&First,12321);
    InsertLast(&First,345);
    
    int iCnt=Count(First);
    printf("count of nodes are %d\n",iCnt);
    Display(First);
    ProductDigit(First);
    
    return 0;
}