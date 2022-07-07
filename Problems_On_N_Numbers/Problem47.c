// Accept the number from user and return the smallest number.
#include<stdio.h>
#include<stdlib.h>

int Min(int *iPtr,int iSize)
{
    int iCnt=0;
    int iMin=*(iPtr);

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(iMin>*(iPtr+iCnt))
        {
            iMin=*(iPtr+iCnt);
        }
    }
    return iMin;
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
    iRet=Min(iPtr,iSize);
    printf("Minimum element is %d\n",iRet);
    return 0;

}