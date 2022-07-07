//Accept N numbers from user and return difference between frequency of even numbers odd numbers.
#include<stdio.h>
#include<stdlib.h>

int Frequency(int *iPtr,int iLength)
{
    register int iCnt=0;
    int Cnt1=0,Cnt2=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if((*(iPtr+iCnt))%2==0)
        {
            Cnt1++;
        }
        else
        {
            Cnt2++;
        }
    }

    return Cnt1-Cnt2;
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
    
    iRet=Frequency(ptr,iSize);

    printf("difference between frequency of Even numbers and odd numbers is : %d\n",iRet);

    free(ptr);
    return 0;
}