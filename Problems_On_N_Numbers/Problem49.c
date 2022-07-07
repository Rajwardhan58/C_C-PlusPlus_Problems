//Accept  n numbers from user and display all such numbers which contains  3 digit in it

#include<stdio.h>
#include<stdlib.h>

void Display(int *iPtr,int iLength)
{
    int iCnt=0;
    
    
    for(iCnt=0;iCnt<iLength;iCnt++)
    {            
        if(*(iPtr+iCnt)>=100 || *(iPtr+iCnt)<=999)
        {
            printf("%d\n",(*(iPtr+iCnt)));
        }
    }
}


int main()
{
    int iSize=0;
    int *ptr=NULL;
    
    int iCnt1=0;
    printf("Enter the number of elements\n");
    scanf("%d",&iSize);

    printf("enter the elements\n");
    ptr=(int *)malloc(iSize*sizeof(int));

    for(iCnt1=0;iCnt1<iSize;iCnt1++)
    {
        scanf("%d",&(*(ptr+iCnt1)));
    }

    Display(ptr,iSize);    

    return 0;

}
