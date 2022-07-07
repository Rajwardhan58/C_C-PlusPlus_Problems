//Accept N number from user and accept range ,display all elements from that range



#include<stdio.h>
#include<stdlib.h>


void Range(int *iPtr,int iLength,int iStart,int iEnd)
{
    int iCnt=0;
    int iVal=iLength;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(((*(iPtr+iCnt))>=iStart) && ((*(iPtr+iCnt))<=iEnd))
        {
            printf("Elements : %d\n",*(iPtr+iCnt));
        }
    }
    
}

int main()
{
    int iSize=0;
    int iValue1=0;
    int iValue2=0;
    int *ptr=NULL;
    int iCnt=0;
    int iRet=0;
    printf("Enter the number of elements \n");
    scanf("%d",&iSize);

    printf("Enter the starting point \n");
    scanf("%d",&iValue1);

    printf("Enter the Ending point \n");
    scanf("%d",&iValue2);

    ptr=(int *)malloc(iSize*sizeof(int));

    if(ptr==NULL)
    {
        printf("Memory is not allocated \n");
        return -1;
    }

    printf("enter the elements\n");

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&(*(ptr+iCnt)));
    }

    Range(ptr,iSize,iValue1,iValue2);

    free(ptr);
    return 0;
}