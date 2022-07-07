//accept N numbers from user and accept one another number a Check whether NO is present or not

#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL Check(int *iPtr,int iLength,int iNo)
{
    int iCnt=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if((*(iPtr+iCnt))==iNo)
        {
            
            break;
        }
    }
    if(iCnt<iLength)
    {
        return TRUE;

    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iSize=0;
    int iValue=0;
    int *ptr=NULL;
    int iCnt=0;
    BOOL bRet=FALSE;
    printf("Enter the number of elements \n");
    scanf("%d",&iSize);

    printf("Enter the number \n");
    scanf("%d",&iValue);

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

    bRet=Check(ptr,iSize,iValue);

    if(bRet==TRUE)
    {
        printf("Number is present \n");
    }
    else
    {
        printf("Number is not present \n");
    }

    free(ptr);
    return 0;
}