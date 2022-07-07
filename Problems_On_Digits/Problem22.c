//Write a program which accept number from user and check whether it contains 0 in it or not

#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef bool BOOL;

BOOL ChkZero(int iNo)
{
    int iDigit=0;
    BOOL bFlag=FALSE;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo!=0)
    {
        iDigit=iNo%10;
        if(iDigit==0)
        {
            bFlag=TRUE;
            break;
        }
        iNo=iNo/10;
    }
    return bFlag;
}

int main()
{
    int iValue=0;
    BOOL bRet=FALSE;
    printf("Enter the value\n");
    scanf("%d",&iValue);

    bRet=ChkZero(iValue);

    if(bRet==TRUE)
    {
        printf("It contains zero\n");
    }
    else
    {
        printf("There is no zero\n");
    }

    return 0;
}