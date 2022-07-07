//Accept n numbers from user and accept one another number as No,return frequency of No form it.


#include<stdio.h>
#include<stdlib.h>

int Frequency(int *iPtr,int iLength,int iNo)
{
    int iCnt=0;
    int Cnt=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if((*(iPtr+iCnt))==iNo)
        {
            Cnt++;
        }
    }
    return Cnt;
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
        printf("memory is not allocate \n");
        return -1;
    }

    printf("Enter the %d elements of array :\n",iSize);

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&(*(ptr+iCnt)));
    }

    iRet=Frequency(ptr,iSize,iValue);

    printf("frequency of %d is : %d\n",iValue,iRet);
    
    free(ptr);
    return 0;
    
}