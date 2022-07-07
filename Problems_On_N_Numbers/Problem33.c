//Accept number from user and display such elements which are even and divisible by 5 
#include<stdio.h>
#include<stdlib.h>

void Display(int *iPtr,int iLength)
{
    int iCnt=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(((*(iPtr+iCnt))%5==0)&&((*(iPtr+iCnt))%2==0))
        {
            printf("value even and divisible 5 is :%d\n",*(iPtr+iCnt));
        }
    }
}

int main()
{
    int iSize=0;
    int *ptr=0;
    int iCnt=0;
    printf("Enter the number of elements :\n");
    scanf("%d",&iSize);

    printf("Enter the values : \n");

    ptr=(int *)malloc(iSize*sizeof(int));

    if(ptr==NULL)
    {
        printf("unable to allocate memory");
        return -1;
    }

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&(*(ptr+iCnt)));
    }
    Display(ptr,iSize);

    free(ptr);

    return 0;
}