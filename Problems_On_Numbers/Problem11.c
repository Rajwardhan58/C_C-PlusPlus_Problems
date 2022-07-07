//Write a program which accept one number from user and print that number of even numbers on screen

#include<stdio.h>

void PrintEven(int iNo)
{
    int iCnt=0;
    int iVal=1;
    
    if(iNo<=0)
    {
        return;        
    }

    while(iCnt!=iNo)
    {
        if(iVal%2==0)
        {
            printf("%d\t",iVal);
            iCnt++;
        }
        iVal++;
    }
}

int main()
{
    int iValue=0;
    
    printf("Enter the number\n");
    scanf("%d",&iValue);
    PrintEven(iValue);
    return 0;
}