// Accept the number from user and return difference of the largest and smallest number.

#include<stdio.h>
#include<stdlib.h>

int Diff(int *iPtr,int iLength)
{
    int iCnt=0;
    int iMin=*(iPtr+iCnt); 
    int iMax=*(iPtr+iCnt);


    for(iCnt=1;iCnt<iLength;iCnt++)
    {
        if(iMax<(*(iPtr+iCnt)))
        {
            iMax=(*(iPtr+iCnt));
        }
        else if(iMin>(*(iPtr+iCnt)))
        {
            iMin=(*(iPtr+iCnt));
        }
        
    }

    return iMax-iMin;
    
}


int main()
{
    int iSize=0;
    int*ptr=NULL;
    int iRet=0;
    int iCnt=0;

    printf("Enter the number of elements\n");
    scanf("%d",&iSize);

    printf("enter the elements\n");
    ptr=(int *)malloc(iSize*sizeof(int));

    

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&(*(ptr+iCnt)));
    }
    

    iRet=Diff(ptr,iCnt);

    printf("Difference between in max and min number is : %d\n",iRet);

    return 0;

}
