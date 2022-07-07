//Accept n numbers from user and return frequency of 11 from it


#include<stdio.h>
#include<stdlib.h>

int Frequency(int *iPtr,int iLength)
{
    int iCnt=0;
    int Cnt=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if((*(iPtr+iCnt))==11)
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

    iRet=Frequency(ptr,iSize);

    printf("frequency of 11 is : %d\n",iRet);
    
    free(ptr);
    return 0;
    
}