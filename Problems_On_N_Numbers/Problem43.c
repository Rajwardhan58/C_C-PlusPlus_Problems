//accept N numbers from user and accept one another number as No , return index of its last occurence of that number

#include<stdio.h>
#include<stdlib.h>


int FirstOcc(int *iPtr,int iLength,int iNo)
{
    int iCnt=0;
    
    for(iCnt=iLength-1;iCnt>=0;iCnt--)
    {
        if((*(iPtr+iCnt))==iNo)
        {
        
            break;
        }
    }
    
    if(iCnt<iLength)
    {
        return iCnt;
    }
    else
    {
        return -1;
    }
}

int main()
{
    int iSize=0;
    int iValue=0;
    int *ptr=NULL;
    int iCnt=0;
    int iRet=0;
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

    iRet=FirstOcc(ptr,iSize,iValue);

    if(iRet==-1)
    {
        printf("there is no such a number \n");
    }
    else
    {
        printf("last occurence of number is %d\n",iRet);
    }

    
    free(ptr);
    return 0;
}