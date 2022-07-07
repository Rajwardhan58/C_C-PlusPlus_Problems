//Accept N numbers from user and return difference between summation of even elements and summetion of odd elements

#include<stdio.h>
#include<stdlib.h>

int Diff(int *iPtr,int iSize)
{
    int iSum1=0,iSum2=0,iCnt=0;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(*(iPtr+iCnt)%2==0)
        {
            iSum1=iSum1+*(iPtr+iCnt);
        }
        else
        {
            iSum2=iSum2+*(iPtr+iCnt);
        }
    }
    return iSum1-iSum2;
}

int main()
{
    int iSize=0;
    int *ptr=NULL;
    printf("Enter the size\n");
    scanf("%d",&iSize);

    ptr=(int *)malloc(iSize*sizeof(int));

    printf("Enter the elements\n");

    for(int iCnt=0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&(*(ptr+iCnt)));
    }

    int iRet=Diff(ptr,iSize);

    printf("difference between summation of even elements and summetion of odd elements are : %d\n",iRet);
    return 0;
}