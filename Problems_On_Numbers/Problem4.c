//Accept one number and check whether the number is divisible by five or not

#include<stdio.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL Check(int iNo)
{
    if((iNo%5)==0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue=0;
    BOOL bRet=FALSE;
    printf("Enter the value\n");
    scanf("%d",&iValue);
    bRet=Check(iValue);

    if(bRet==TRUE)
    {
        printf("Divisible by 5\n");
    }
    else
    {
        printf("Not divisible by 5\n");
    }
    return 0;
}