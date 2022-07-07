//Write a program which accept number from user and Display all its non factors.

#include<stdio.h>

void NonFactors(int iNo)
{
    int iCnt=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if(iNo%iCnt!=0)
        {
            printf("%d\t",iCnt);
        }
    }
}

int main()
{
    int iValue=0;
    printf("Enter the value \n");
    scanf("%d",&iValue);
    NonFactors(iValue);

    return 0;
}