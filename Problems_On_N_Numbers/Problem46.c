// Accept the number from user and return the largest number.

#include<stdio.h>
#include<stdlib.h>

int Max(int *iPtr,int iSize)
{
    int iCnt=0,iMax=0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(iMax<*(iPtr+iCnt))
        {
            iMax=*(iPtr+iCnt);
        }
    }
    return iMax;
}

int main()
{
    int iSize=0,iRet=0;
    int *iPtr=NULL;
    printf("Enter the size\n");
    scanf("%d",&iSize);

    iPtr=(int *)malloc(iSize*sizeof(int));

    printf("Enter the %d elements\n",iSize);

    for(int iCnt=0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&(*(iPtr+iCnt)));
    }
    iRet=Max(iPtr,iSize);
    printf("Maximum element is %d\n",iRet);
    return 0;

}