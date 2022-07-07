//Accept N number from user and return product of all odd numbers


#include<stdio.h>
#include<stdlib.h>


int Product(int *iPtr,int iLength)
{
    int iCnt=0;
    int iMult=1;
    int Cnt=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(((*(iPtr+iCnt))%2)!=0)
        {
            iMult=iMult*(*(iPtr+iCnt));
            Cnt++;
        }
    }
    if(Cnt==0)
    {
        return 0;
    }
    else
    {
        return iMult;
    }
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
        printf("Memory is not allocated \n");
        return -1;
    }

    printf("enter the elements\n");

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&(*(ptr+iCnt)));
    }

    iRet=Product(ptr,iSize);

    printf("Product is : %d\n",iRet);
    
    free(ptr);
    return 0;
}