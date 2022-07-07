//Accept number from user and check whether that number contains 11 in it or not.

#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL Check(int *iPtr,int iLength)
{
    int iCnt=0;
    BOOL iFlag=FALSE;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if((*(iPtr+iCnt))==11)
        {
            return TRUE;
            break;
        }
    }
    return iFlag;
}

int main()
{
    int iSize=0;
    int *ptr=NULL;
    int iCnt=0;
    BOOL bRet=FALSE;
    printf("Enter the number of elements \n");
    scanf("%d",&iSize);

    ptr=(int *)malloc(iSize*sizeof(int));

    if(ptr==NULL)
    {
        printf("memory is not allocate \n");
        return -1;
    }

    printf("Enter the elements of array :\n");

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&(*(ptr+iCnt)));
    }

    bRet=Check(ptr,iSize);

    if(bRet==TRUE)
    {
        printf("11 is present\n");
    }
    else
    {
        printf("11 is absent\n");
    }

    return 0;
    
}