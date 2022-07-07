//Accept N numbers from user and return frequency of even numbers.
#include<stdio.h>
#include<stdlib.h>

int CountEven(int *iPtr,int iLength)
{
    register int iCnt=0;
    int Cnt=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if((*(iPtr+iCnt))%2==0)
        {
            Cnt++;
        }
    }

    return Cnt;
}

int main()
{
    int iSize=0;
    int *ptr=NULL;
    int iCnt=0;
    int iRet=0;
    printf("Enter number of elements : \n");
    scanf("%d",&iSize);

    ptr=(int *)calloc(iSize,sizeof(int));
    if(ptr==NULL)
    {
        printf("memory is not allocated\n");
        return -1;
    }
    printf("Enter the values : \n");

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&(*(ptr+iCnt)));
    }
    
    iRet=CountEven(ptr,iSize);

    printf("Count of Even number is : %d\n",iRet);

    free(ptr);
    return 0;
}