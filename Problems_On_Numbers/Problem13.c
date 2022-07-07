//Write a program which accept number from user and print even factors of that number

#include<stdio.h>

void DisplayEvenFactors(int iNo)
{
    int iCnt=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(iCnt=1;iCnt<=(iNo/2);iCnt++)
    {
        if((iNo%iCnt==0) && (iCnt%2==0))
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
    DisplayEvenFactors(iValue);

    return 0;
}