//Wrte a program which accept number from user and display its factor in decresing order
#include<stdio.h>

void DisplayFactors(int iNo)
{
    int iCnt=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(iCnt=(iNo/2);iCnt>0;iCnt--)
    {
        if(iNo%iCnt==0)
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
    DisplayFactors(iValue);

    return 0;
}