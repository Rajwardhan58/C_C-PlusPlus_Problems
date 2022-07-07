// Accept n the numbers from user and display summation of digits of each number.

#include<stdio.h>
#include<stdlib.h>

void DigitSum(int *iPtr,int iLength)
{
    int iCnt=0;
    int iDigit=0;
    int *iiPtr=NULL;
    int iSum=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        iiPtr=iPtr;
        iSum=0;
        while(*(iiPtr+iCnt)!=0)
        {
            iDigit=*(iiPtr+iCnt)%10;
            iSum=iSum+iDigit;
            *(iiPtr+iCnt)=*(iiPtr+iCnt)/10;
        }
        printf("%d\t",iSum);
    }
    
}


int main()
{
    int iSize=0;
    int *ptr=NULL;
    
    int iCnt=0;
    printf("Enter the number of elements\n");
    scanf("%d",&iSize);

    printf("enter the elements\n");
    ptr=(int *)malloc(iSize*sizeof(int));

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&(*(ptr+iCnt)));
    }

    DigitSum(ptr,iCnt);

    

    return 0;

}
