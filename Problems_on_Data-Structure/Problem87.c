//1.write a program which search last occurence of perticular element from singly linearlinked list.
//Function should return position at which element found

#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}NODE,*PNODE,**PPNODE;

void insertLast(PPNODE Head)
{   
    int iSize=0;
    printf("Enter the size \n");
    scanf("%d",&iSize);
    printf("Enter the element \n");
    for(int i=0;i<iSize;i++)
    {
        int iNo=0;
        scanf("%d",&iNo);
        PNODE temp=NULL;
        PNODE newn=(PNODE)malloc(sizeof(NODE));
        newn->data=iNo;
        newn->next=NULL;
        if(*Head==NULL)
        {
            *Head=newn;
        }
        else
        {
            temp=*Head;
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=newn;
        }
    }    
}

int SearchLastOcc(PNODE Head,int iNo)
{
    int iCnt1=1;
    int iCnt2=-1;
    while(Head!=NULL)
    {
        if(Head->data==iNo)
        {
            iCnt2=iCnt1;
        }
        Head=Head->next;
        iCnt1++;
    }
    return iCnt2;
}

int CountNode(PNODE Head)
{
    int Count=0;
    while(Head!=NULL)
    {
        Count++;
        Head=Head->next;
    }
    return Count;
}
void Display(PNODE Head)
{
    printf("elements are\n");
    while(Head!=NULL)
    {
        printf("%d\t",Head->data);
        Head=Head->next;
    }
    printf("\n");
}
int main()
{
    PNODE First=NULL;
    int iValue=0;
    insertLast(&First);
     
    printf("Enter the elements that you want to search\n");
    scanf("%d",&iValue);
    
    
    int iNo=SearchLastOcc(First,iValue);

        if(iNo==-1)
        {
            printf("There is no such element are present\n");
        }
        else
        {
            printf("Element is at position of %d\n",iNo);
        }
    //Display(First);

    //int iNo=CountNode(First);
    //printf("%d\n",iNo);   
    return 0;
}
